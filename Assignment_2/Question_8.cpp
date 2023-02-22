

//Q8 - Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle.
//        2
//       3 5
//     7 11 13
//   17 19 23 29
//  31 37 41 43 47
// 53 59 61 67 71 73
#include<iostream>
using namespace std;
int main(){
    int n=6,m;
     for(int j=0;j<n;j++){
            if(j%2!=0){
               int m=j;

            }

         }
    for(int i=0;i<n;i++){

         for(int j=0;j<n;j++){
            if(j%2!=0){
                m=j;

            }

         }
         for(int j=0;j<n-i;j++){
            cout<<" ";

         }
         for(int j=0;j<i;j++){
            cout<<m;
            m++;

         }
         for(int j=0;j<i;j++){
            cout<<m;
            m++;

         }
         cout<<endl;
    }
}