#include<iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int j = 0;
    for (int i = 0; i < n;i++){
        //for (int j = i; j < n;j++){
            if(arr[i]%2==0){
                swap(arr[i],arr[j++]);
            }
        //}
    }
    for (int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}