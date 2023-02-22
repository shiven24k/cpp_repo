//Q2 - Write a program to print all Armstrong numbers between 100 to 500.
#include<iostream>
using namespace std;
int main(){

    for(int n=100;n<500;n++){
     int answ=0,last;
        int t=n;
        while(t!=0){

         last=t%10;
         answ=answ+(last*last*last);
         t=t/10;
        }
        if(answ==n){
            cout<<answ<<endl;
        }

    }
    return 0;

}
