 #include<iostream>
 using namespace std;
 string fizzBuzz(int n) {
        string arr[n]=0;
        for(int i=0;i<n;i++){
            if(i%3==0){
                arr[i]="Fizz";
            }
           else if(i%5==0){
                arr[i]="Buzz";
            }
        }return arr[i];}

int main(){
    int n=21;
    fizzBuzz(n);
}