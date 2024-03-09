#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;
    vec.resize(3);
    

    for(int i=0; i<3; i++){
        int ele;
        cin >> ele;
        vec.push_back(ele);
    }
    int key;
    cin >> key;
    for(int i=0; vec.size(); i++){
        int occ;
        if(key==vec[i]){
            occ = i;
        }cout << occ;
    }
    
}