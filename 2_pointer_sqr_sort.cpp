#include<iostream>
using namespace std;
#include<math.h>
#include<vector>

int main() {
    vector<int> v;
    v.push_back(-6);
    v.push_back(-1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);

    
   
    int right = v.size()-1; ;
    for(int left = 0; left < v.size();left++){
        //if((pow(arr[left],2))>=pow(arr[right],2)){
            if(abs(v[left])>=abs(v[right])){
            v[left] = pow(v[left], 2);
            
            
            right--;
                }
    }
    for (int i = 0; i < 6;i++) {
        cout << v[i] << " ";
    }
    return 0;}