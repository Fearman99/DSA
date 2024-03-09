#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    int key;
    cin>>key;
    int occ = -1;
    for(int i = 0; i <v.size(); i++) {
        if(v[i] == key){
            occ = i;
            
            cout << occ<<endl;

        }
    }
    

//     for(int i = v.size()-1; i > 0; i--) {
//         if(v[i] == key){
//             cout << i;
//             break;
//         }
// }
}