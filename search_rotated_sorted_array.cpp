#include<iostream>
using namespace std;

int bs(int arr[],int s,int e,int k){
    
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    mid=s+(e-s)/2;
    }return -1;
}

int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[0]<=arr[mid]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }return s;
}

int pos(int arr[],int n,int k){
    int pivot_ele=pivot(arr,n);
    if(k>=arr[pivot_ele] && k<=arr[n-1]){
        return bs(arr,pivot_ele,n-1,k);
    }
    else{
        return bs(arr,0,pivot_ele-1,k);
    }
}
int main(){
int arr[
    
]={9,19,99,1,6,8};
int p=pos(arr,6,9);
cout<<p;
return 0;
}