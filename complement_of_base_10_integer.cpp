#include<iostream>
#include<cstdint>
using namespace std;

int base10(int num){int cnt=0;
    while(num>0)
 {
    num/=2;
    cnt++;
 }
    int l=Integer.toBinaryString(num).lenght();
    int helper=(1>>cnt)-1;
    return helper^num;

}
int main(){
    int num=5;
    base10(num);
    return 0;
}