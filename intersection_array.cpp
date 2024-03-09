#include <iostream>
using namespace std;

void intersection(int arr_1[], int arr_2[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    while (n1 > i && n2 > j)
    {
        if (arr_1[i] == arr_2[j])
        {
            cout << arr_1[i] << endl;
            i++;
            j++;
        }
        else if (arr_1[i] < arr_2[j])
        {
            i++;
        }
        else
            j++;
    }
}

int main()
{
    int n1 = 5;
    int n2 = 5;
    int arr_1[] = {1,7,9,77,99};
    int arr_2[] = {6,8,9,88,99};
    intersection(arr_1, arr_2, n1, n2);
    return 0;
}