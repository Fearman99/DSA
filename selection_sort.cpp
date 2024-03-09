#include<iostream>
using namespace std;
void sel(int arr,int n){
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }swap(arr[minindex],arr[i]);
    }
}





int main(){
    int arr[]={2,76,7,4,99};
    int n=5;
    sel(arr,n);
    cout<<arr[n];
    return 0;
}