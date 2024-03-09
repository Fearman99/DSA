#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 2, 3, 6};
    int total = 0;
    int sum1 = 0;
    int sum2 = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    for (int i = 0; i < n; i++){
        sum1 += arr[i];
        sum2 =total-sum1;
        
        if(sum1==sum2){
        cout << "Sum is equal"<<endl;
       
    }
    else{
        cout << "Sum is not equal"<<endl;
    }
    }
    
    return 0;
}
