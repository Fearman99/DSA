#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int leftmostone(vector<vector<int>>&v){
    
    for(int i = 0; i < v.size();i++){
        for (int j = v[i].size(); j > 0;j--){
            if(v[i][j]==0){}
        }
    }

}

int maxonerow(vector<vector<int>> &v)
{
    int max = INT32_MIN;
    int totone;
    int rowithmaxone = -1;
    int n = v[0].size();
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 1)
            {

                totone = n - j;
                if (totone > max)
                {
                    max = totone;
                    rowithmaxone = i;
                }
                break;
            }
            
        }
    }
    return rowithmaxone;
}

    int main()
    {
        int n, m;

        cin >> m;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }

        int res = maxonerow(v);
        cout << res << endl;
    }