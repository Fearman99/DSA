#include<iostream>
using namespace std;


second_largest(int arr[], int n){
    int max=arr[0];
    int snd_max=-1;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(snd_max<arr[i]  &&  arr[i]!=max){
            snd_max=arr[i];
        }
    }cout<< snd_max;
}

int main(){
    int arr[]={7,5,45,2,9};
    second_largest(arr,5);
    return 0;
}