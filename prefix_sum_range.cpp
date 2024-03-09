#include<iostream>
using namespace std;

int main() {
    int arr[6] = {10, 1, 2, 3, 4, 5};
    int s;
    int e;
    cin >>s;
    cin >>e;
    int prefix_sum=0;
    int prefix_sum2=0;
    int ans=0;
    for(int i=0;i<=e+1;i++)
    {
        prefix_sum += arr[i];
    }
    for(int i=0;i<s+1;i++){
        prefix_sum2 += arr[i];
        ans=prefix_sum-prefix_sum2;
    }
    cout<<ans;
    return 0;

}