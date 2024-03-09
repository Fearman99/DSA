#include<iostream>
using namespace std;

int peak(int arr[],int n){
       int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(arr[mid]<arr[mid + 1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }return s;
}


int main(){
    int arr[]={98,76,45,32,999,888,777,666};
    int p=peak(arr,8);
    cout<<p;
    return 0;
}