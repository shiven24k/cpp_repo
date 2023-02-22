//Q3 - Write a program to find the sum of n natural numbers.
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Write the nth number till you want to sum the numbers"<<endl;
    cin>>n;
    for(int i = 0;i<=n;i++){
           sum+=i;
    }
    cout<<"The sum of "<<n<<"th number is "<<sum;
}