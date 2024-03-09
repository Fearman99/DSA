#include <iostream>
using namespace std;
#include <vector>

void spiral(vector<vector<int>> &v)
{
    vector<vector<int>> ans;
    int top = 0;
    int left = 0;
    int right = v[0].size();
    int bottom = v.size();
    int direction = 0;
    while (right > left && bottom > top)
    {
        if (direction == 0)
        {
            for (int col = left; col < right; col++)
            {
                cout << v[top][col] << endl;
            }
            top++;
        }
        else if (direction == 1)
        {
            for (int row = top; row < bottom; row--)
            {
                cout << v[row][right];
            }
            right--;
        }
        else if (direction == 2)
        {
            for (int col = right; col > left; col--)
            {
                cout << v[bottom][col];
            }
            bottom--;
        }
        else if (direction == 3)
        {
            for (int row = bottom; row > top; row++)
            {
                cout << v[row][left];
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
}

        int main()
        {
            int n;
            int m;
            cin >> n >> m;
            vector<vector<int>> v(n, vector<int>(m));
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cin >> v[i][j];
                }
            }
            spiral(v);
        }