#include<iostream>
using namespace std;






int main(){
    int n,c,s=0,r=0;
    cin>>n;
    c=n;
    while(n>0){
        r=n%10;
        s=r+(s*10);
        n=n/10;}
     if(c==s){
            cout<<"pa;indrome";
        }
    else{
            cout<<"<not";
        }
return 0;}