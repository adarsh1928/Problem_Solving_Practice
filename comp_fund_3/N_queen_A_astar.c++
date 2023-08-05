#include<bits/stdc++.h>

using namespace std;

#include <chrono>

using namespace chrono;

//20607 microsecond=20.6 ms

typedef vector<int> State;

struct Node {
    State state;
    int g; 
    int h; 
    int f; 
};


struct NodePriorityQueue {
    bool operator() (const Node& a, const Node& b) const {
        return a.f > b.f;
    }
};


int heuristic(const State& state) {
    int n = state.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (state[i] == state[j] || abs(state[i] - state[j]) == abs(i - j)) {
                count++;
            }
        }
    }
    return count;
}

bool isGoalState(const State& state) {
    int n = state.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (state[i] == state[j] || abs(state[i] - state[j]) == abs(i - j)) {
                return false;
            }
        }
    }
    return true;
}

vector<State> generateSuccessors(const State& state) {
    vector<State> successors;
    int n = state.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (state[j] != i) {
                State successor = state;
                successor[j] = i;
                successors.push_back(successor);
            }
        }
    }
    return successors;
}

// A* search algorithm
State search(const State& initialState) {
    priority_queue<Node, vector<Node>, NodePriorityQueue> openList;
    Node initialNode = { initialState, 0, heuristic(initialState), heuristic(initialState) };
    openList.push(initialNode);
    while (!openList.empty()) {
        Node currentNode = openList.top();
        openList.pop();
        if (isGoalState(currentNode.state)) {
            return currentNode.state;
        }
        vector<State> successors = generateSuccessors(currentNode.state);
        for (const auto& successor : successors) {
            Node successorNode = { successor, currentNode.g + 1, heuristic(successor), currentNode.g + 1 + heuristic(successor) };
            openList.push(successorNode);
        }
    }
    return State();
}

void printState(const State& state) {
    int n = state.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (state[j] == i) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

int main()
{
    State initialState = {0, 1, 2, 3, 4};

    auto start = high_resolution_clock::now();

    State solution = search(initialState);
    
    if (!solution.empty()) {
        cout << "Found a solution:" << endl;
        printState(solution);
    } else {
        cout << "Failed to find a solution." << endl;
    }

    auto stop = high_resolution_clock::now();
     auto duration = duration_cast<microseconds>(stop - start);

     cout << "Time taken: " << duration.count() << " microseconds" << endl;


    return 0;


}
