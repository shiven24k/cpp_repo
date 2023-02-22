
//Q5 - Write a program to print the cross pattern given below (in the shape of X):
// *   *
//  * *
//   *
//  * *
// *   *
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=5;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if((i+j==n) || (i==j)){
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
