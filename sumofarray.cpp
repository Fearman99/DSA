#include<iostream>

using namespace std;
int sumElement(int arr[], int n) {
    int t=0;
    for (int i = 0; i < n; i++) {
       t=t+arr[i];
        return t;
    }
}




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << sumElement(arr, n) << endl;

    }
    return 0;
}
// } Driver Code Ends