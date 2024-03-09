#include<iostream>

using namespace std;

void print(int arr[], int n) {

    for (int i = 0; i < n; i=i+2) {
       if (i + 1 < n) {
            cout <<'\n'<< arr[i];}
    }
}

int main()
{
    int arr[10]={1,2,3,6,8,9,7};
    print(arr,10);
    return 0;
}