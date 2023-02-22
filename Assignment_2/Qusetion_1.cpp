//Q1 - Write a number to calculate the factorial of the number
#include<iostream>
using namespace std;
int main(){
    int n,answ=1;
    cout<<"Enter the number to find factorial of "<<endl;
    cin>>n;
    for(int i =1;i<=n;i++){
        answ=answ*i;
    }
    cout<<"THe factorial of "<<n<<" is "<<answ<<endl;
}