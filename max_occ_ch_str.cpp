#include<iostream>
using namespace std;
char getmax(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int num=0;
        num=ch -'a';
        arr[num]++;
    }
}



int main{}{
    string s='afdf';
    getmax(s);
    return 0;
}