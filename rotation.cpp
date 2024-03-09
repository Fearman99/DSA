#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	     for (int i = 0; i < n; i++) {
            if (n == 0)
                cout << i;
            else if (arr[i] == i + 1) {
                cout << i+1;
            }}}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x: ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends