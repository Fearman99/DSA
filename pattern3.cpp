#include <iostream>
using namespace std;
int main()
{
    int count = 1, i = 1, n;
    cin >> n;
    while (i <= n)
    {int s=n-i;
        int j = 1;
        while (s)
        {
            cout <<" ";
            s--;
        }
        ;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout << endl;
        i++;
    }
}