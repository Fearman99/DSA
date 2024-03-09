#include<iostream>
using namespace std;

int sort(int arr[],int n){
int left=0;
int right= n-1;
while(right>left){
    while(arr[left]==0 && left<right){
        left++;
    }
    while(arr[right]==1 &&left<right){
        right--;
    }
    if(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;}
    }
}




int main(){
    int arr[]={0,1,0,0,1};
    sort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");


    return 0;
}