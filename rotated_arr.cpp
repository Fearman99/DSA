#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int k;
    cin >> k;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    reverse(v.begin(), v.end());
    reverse(v.begin() + k, v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<' ';
    }

    // int n = 7;
    // int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    // int arr2[7];
    // int k;
    // cin >> k;
    // int j = 0;
    // for (int i = n - k; i < n; i++)
    // {
    //         arr2[j++] = arr[i];
    // }

    // for (int i = 0; i < n - k; i++)
    // {
    //         arr2[j++] = arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr2[i] << " ";
    // }
}
