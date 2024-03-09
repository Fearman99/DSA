#include <iostream>
using namespace std;


void targetsum(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i]+arr[j]==key){
                cout << arr[i] << " " << arr[j] << endl;
            }
    }
    }
};


int main()
{
    int key;
    int arr[7] = {0, 1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cin >> key;
    targetsum(arr, n, key);
    return 0;
}

