#include<iostream>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n;
    cin >> m;
    for (int i = 1;i<=n;i++) {
        for(int j = 1;j<=m;j++) {
             if((i+j)&1){
                 cout << '2';
             }
             else{
                 cout << '1';
             }
        }cout << endl;
    }
}