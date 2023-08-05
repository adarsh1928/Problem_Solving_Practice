#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <climits>
using namespace std;

int getMax(int input[], int k, int n)
{
    int i;
    int min = INT_MAX;
    deque<int> d1;

    for (i = 0; i < k; i++)
    {
        // while((!d1.empty()) && input[d1.back()] < input[i])
        while ((!d1.empty()) && input[i] >= input[d1.back()])
        {
            d1.pop_back();
            // cout << "popped" << endl;
        }

        d1.push_back(i);
    }

    for (; i < n; i++)
    {
        // cout << input[d1.front()] << " front" << endl;
        min = min < input[d1.front()] ? min : input[d1.front()];

        while (!(d1.empty()) && d1.front() <= i - k)
            d1.pop_front();

        while (!(d1.empty()) && input[d1.back()] < input[i])
            d1.pop_back();

        d1.push_back(i);
    }

    min = min < input[d1.front()] ? min : input[d1.front()];

    return min;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    int *input;
    int query;

    cin >> n;
    cin >> q;
    input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> query;
        cout << getMax(input, query, n) << endl;
    }
    delete[] input;

    return 0;
}
