// // #include <iostream>
// // #include <queue>

// // using namespace std;

// // const int MAX_MISSIONARIES = 3;
// // const int MAX_CANNIBALS = 3;

// // struct State {
// //     int missionaries;
// //     int cannibals;
// //     int boat; // 0 = left, 1 = right
// // };

// // bool isValid(int missionaries, int cannibals, int boat) {
// //     if (missionaries < 0 || cannibals < 0 || missionaries > MAX_MISSIONARIES || cannibals > MAX_CANNIBALS)
// //         return false;
// //     if (boat != 0 && boat != 1)
// //         return false;
// //     if (missionaries < cannibals && missionaries > 0)
// //         return false;
// //     if (MAX_MISSIONARIES - missionaries < MAX_CANNIBALS - cannibals && MAX_MISSIONARIES - missionaries > 0)
// //         return false;
// //     return true;
// // }

// // void bfs(State start, State goal) {
// //     queue<State> q;
// //     q.push(start);

// //     while (!q.empty()) {
// //         State current = q.front();
// //         q.pop();

// //         if (current.missionaries == goal.missionaries && current.cannibals == goal.cannibals && current.boat == goal.boat) {
// //             cout << "Solution found!" << endl;
// //             return;
// //         }

// //         // Move two cannibals
// //         if (isValid(current.missionaries, current.cannibals - 2, 1 - current.boat)) {
// //             State next = current;
// //             next.cannibals -= 2;
// //             next.boat = 1 - current.boat;
// //             q.push(next);
// //         }

// //         // Move two missionaries
// //         if (isValid(current.missionaries - 2, current.cannibals, 1 - current.boat)) {
// //             State next = current;
// //             next.missionaries -= 2;
// //             next.boat = 1 - current.boat;
// //             q.push(next);
// //         }

// //         // Move one cannibal
// //         if (isValid(current.missionaries, current.cannibals - 1, 1 - current.boat)) {
// //             State next = current;
// //             next.cannibals -= 1;
// //             next.boat = 1 - current.boat;
// //             q.push(next);
// //         }

// //         // Move one missionary
// //         if (isValid(current.missionaries - 1, current.cannibals, 1 - current.boat)) {
// //             State next = current;
// //             next.missionaries -= 1;
// //             next.boat = 1 - current.boat;
// //             q.push(next);
// //         }

// //         // Move one cannibal and one missionary
// //         if (isValid(current.missionaries - 1, current.cannibals - 1, 1 - current.boat)) {
// //             State next = current;
// //             next.missionaries -= 1;
// //             next.cannibals -= 1;
// //             next.boat = 1 - current.boat;
// //             q.push(next);
// //         }
// //     }

// //     cout << "Solution not found." << endl;
// // }

// // int
// #include <iostream>
// #include <stack>

// using namespace std;

// const int MAX_MISSIONARIES = 3;
// const int MAX_CANNIBALS = 3;

// struct State {
//     int missionaries;
//     int cannibals;
//     int boat; // 0 = left, 1 = right
// };

// bool isValid(int missionaries, int cannibals, int boat) {
//     if (missionaries < 0 || cannibals < 0 || missionaries > MAX_MISSIONARIES || cannibals > MAX_CANNIBALS)
//         return false;
//     if (boat != 0 && boat != 1)
//         return false;
//     if (missionaries < cannibals && missionaries > 0)
//         return false;
//     if (MAX_MISSIONARIES - missionaries < MAX_CANNIBALS - cannibals && MAX_MISSIONARIES - missionaries > 0)
//         return false;
//     return true;
// }

// bool dfs(State current, State goal) {
//     if (current.missionaries == goal.missionaries && current.cannibals == goal.cannibals && current.boat == goal.boat) {
//         cout << "Solution found!" << endl;
//         return true;
//     }

//     // Move two cannibals
//     if (isValid(current.missionaries, current.cannibals - 2, 1 - current.boat)) {
//         State next = current;
//         next.cannibals -= 2;
//         next.boat = 1 - current.boat;
//         if (dfs(next, goal))
//             return true;
//     }

//     // Move two missionaries
//     if (isValid(current.missionaries - 2, current.cannibals, 1 - current.boat)) {
//         State next = current;
//         next.missionaries -= 2;
//         next.boat = 1 - current.boat;
//         if (dfs(next, goal))
//             return true;
//     }

//     // Move one cannibal
//     if (isValid(current.missionaries, current.cannibals - 1, 1 - current.boat)) {
//         State next = current;
//         next.cannibals -= 1;
//         next.boat = 1 - current.boat;
//         if (dfs(next, goal))
//             return true;
//     }

//     // Move one missionary
//     if (isValid(current.missionaries - 1, current.cannibals, 1 - current.boat)) {
//         State next = current;
//         next.missionaries -= 1;
//         next.boat = 1 - current.boat;
//         if (dfs(next, goal))
//             return true;
//     }

//     // Move one cannibal and one missionary
//     if (isValid(current.missionaries - 1, current.cannibals - 1, 1 - current.boat)) {
//         State next = current;
//         next.missionaries -= 1;
//         next.cannibals -= 1;
//         next.boat = 1 - current.boat;
//         if (dfs(next, goal))
//             return true;
//     }

//     return false;
// }

// int main() {
//     State start = {3,3,1};

// }
#include<bits/stdc++.h>
using namespace std;

int m, c, b;

bool is_valid(int m1, int c1, int m2, int c2) {
    if (m1 < 0 || c1 < 0 || m2 < 0 || c2 < 0) return false;
    if (m1 > 3 || c1 > 3 || m2 > 3 || c2 > 3) return false;
    if (m1 < c1 && m1 > 0) return false;
    if (m2 < c2 && m2 > 0) return false;
    return true;
}

void DFS(int m1, int c1, int m2, int c2, int b) {
    if (m1 == 0 && c1 == 0) {
        cout << "Solution found!" << endl;
        return;
    }

    if (b == 1) {
        if (is_valid(m1 - 2, c1, m2 + 2, c2)) DFS(m1 - 2, c1, m2 + 2, c2, 0);
        if (is_valid(m1 - 1, c1 - 1, m2 + 1, c2 + 1)) DFS(m1 - 1, c1 - 1, m2 + 1, c2 + 1, 0);
        if (is_valid(m1, c1 - 2, m2, c2 + 2)) DFS(m1, c1 - 2, m2, c2 + 2, 0);
    } else {
        if (is_valid(m1 + 2, c1, m2 - 2, c2)) DFS(m1 + 2, c1, m2 - 2, c2, 1);
        if (is_valid(m1 + 1, c1 + 1, m2 - 1, c2 - 1)) DFS(m1 + 1, c1 + 1, m2 - 1, c2 - 1, 1);
        if (is_valid(m1, c1 + 2, m2, c2 - 2)) DFS(m1, c1 + 2, m2, c2 - 2, 1);
    }
}

int main() {
    DFS(3, 3, 0, 0, 1);
    return 0;
}

