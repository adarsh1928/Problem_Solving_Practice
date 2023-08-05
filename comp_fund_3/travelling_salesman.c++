#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace chrono;
// 3001 microsecond

using namespace std;

const int INF = 1e9; // Define an infinite distance

// Function to find the minimum distance between two cities
int findMinDistance(int city, const vector<int>& path, const vector<vector<int>>& distances) {
    int n = path.size();
    int minDistance = INF;
    for (int i = 0; i < n; i++) {
        if (i == city || find(path.begin(), path.end(), i) != path.end()) {
            continue;
        }
        minDistance = min(minDistance, distances[city][i]);
    }
    return minDistance;
}

// Depth-First Search function to find the shortest path for TSP
void dfs(int current, vector<int>& path, vector<bool>& visited, const vector<vector<int>>& distances, int& minPathLength) {
    if (path.size() == visited.size()) { // If we have visited all the cities
        int pathLength = 0;
        int n = path.size();
        for (int i = 0; i < n - 1; i++) {
            pathLength += distances[path[i]][path[i+1]];
        }
        pathLength += distances[path[n-1]][path[0]]; // Add the distance from the last city back to the starting city
        minPathLength = min(minPathLength, pathLength);
    } else {
        int n = visited.size();
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                int minDistance = findMinDistance(current, path, distances);
                if (minPathLength <= path.size() + 1) { // Pruning condition: stop searching when the current path length is greater than or equal to the minimum path length found so far
                    return;
                }
                if (distances[current][i] <= minDistance) { // Pruning condition: stop searching if the remaining distance from the current city to the nearest unvisited city is greater than the minimum path length found so far
                    path.push_back(i);
                    visited[i] = true;
                    dfs(i, path, visited, distances, minPathLength);
                    visited[i] = false;
                    path.pop_back();
                }
            }
        }
    }
}

// Function to find the shortest path for TSP using DFS
int tspDfs(const vector<vector<int>>& distances) {
    int n = distances.size();
    vector<int> path;
    vector<bool> visited(n, false);
    path.push_back(0); // Start with the first city
    visited[0] = true;
    int minPathLength = INF;
    dfs(0, path, visited, distances, minPathLength);
    return minPathLength;
}

int main() {
    int n = 4;
    auto start = high_resolution_clock::now();
    vector<vector<int>> distances = { {0, 10, 15, 20},
                                       {10, 0, 35, 25},
                                       {15, 35, 0, 30},
                                       {20, 25, 30, 0} };
    int minPathLength = tspDfs(distances);
    cout << "Minimum path length for TSP using DFS: " << minPathLength << endl;
    auto stop = high_resolution_clock::now();
     auto duration = duration_cast<microseconds>(stop - start);

     cout << "Time taken: " << duration.count() << " microseconds" << endl;

    return 0;
}
