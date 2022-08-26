#include <bits/stdc++.h>
using namespace std;


vector<int> slicing(vector<int>& arr, int X, int Y)
{
    auto start = arr.begin() + X;
    auto end = arr.begin() + Y + 1;
    // To store the sliced vector
    vector<int> result(Y - X + 1);
 
    // Copy vector using copy()
    copy(start, end, result.begin());
 
    return result;
}

// Function to print the vector ans
void printResult(vector<int>& ans)
{
 
    // Traverse the vector ans
    for (auto& it : ans) {
 
        // Print elements
        cout << it << ' ';
    }
}

int main()
{
 
    // Given vector
    vector<int> arr = {3, 7, 4, 2, 4, 6, 8, 5, 9, 3};
 
    int N = arr.size();

    for (int i=0; i < N - 4; i++){
        int X = i, Y = i + i;
 
        vector<int> ans;
        ans = slicing(arr, X, Y);

        printResult(ans);
        cout << "----" << '\n';
    }
}