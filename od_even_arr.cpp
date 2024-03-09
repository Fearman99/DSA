#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i <v.size(); i++){
        if((i%2)==0){
            sum1+= v[i];
        }
        else{
            sum2+= v[i];
        }
    }
    cout << sum1<<endl;
    cout << sum2;
}