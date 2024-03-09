#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int y2, x2, x1, y1;
    int sum = 0;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    for (int i = x1;i <= x2;i++){
        for(int j = y1;j <= y2;j++){
            sum += arr[i][j];
        }
    }cout << sum << endl;
}