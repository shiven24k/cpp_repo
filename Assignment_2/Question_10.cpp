//Q10- Write a C++ program to print a rectangle out of *
#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Write the number of rows"<<endl;
    cin>>row;
    cout<<"Write the number of rows and columns"<<endl;
    cin>>column;
    for(int i =0;i<row;i++){
        for(int j =0;j<column;j++){
       cout<<"*";
        }
        cout<<endl;
    }
}