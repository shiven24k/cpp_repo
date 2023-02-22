
//Q4 - Write a program to reverse a given integer number.
#include<iostream>
using namespace std;
int main(){
    //first we have to take the last number(n%10)
    //then remover the last number(n/10)
    int last = 0;
    int rev,n;
    cout<<"This program will reverse the number"<<endl;
    cout<<"Write the number"<<endl;
    cin>>n;
    while(n>0){
        last=n%10;
        rev=rev*10 + last;
        n=n/10;
    }
    cout<<"The reverse of "<<n<<" is "<<rev<<endl;

}
