#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int v[] = {1, 22, 33, 4, 5, 6};
    bool b = false;
    for (int i = 1; i < 6; i++)
    {
       
        if (v[i-1] <= v[i])
        {
            b=true;
        }
    }cout << b;
    
}