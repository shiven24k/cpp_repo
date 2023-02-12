// //Q1 - Write a function to print squares of the first 5 natural numbers.
// #include<iostream>
// using namespace std;
// int square(int a){
//     return a*a;
// }
// int main(){
//     int n;
//     cout<<"Write the value to find it's square value"<<endl;
//     cin>>n;
//     cout<<"The square of the value is "<<square(n);
//     return 0;
// }

// //Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle.
// #include<iostream>
// using namespace std;
// int area(int r ){
//     return 3.14*r*r;
// }
// int circumference(int r){
//     return 2*3.14*r;
// }
// int main (){
//     int r,val;
//     cout<<"Write the radius of the circle"<<endl;
//     cin>>r;
//     cout<<"To check radius type 1"<<endl<<"To check circumference type 2"<<endl<<"To check both circumference and radius type 3";
//     cin>>val;
//     if(val==1){
//         cout<<"The area of the circle is "<<area(r)<<endl;
//     }
//     else if(val==2){
//         cout<<"The circimference of the circle is "<<circumference(r)<<endl;
//     }
//     else if (val==3){
//          cout<<"The area of the circle is "<<area(r)<<endl;
//          cout<<"The circimference of the circle is "<<circumference(r)<<endl;
//     }
// }

// //Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.
// #include<iostream>
// using namespace std;
// void vote(int val){
//     if(val<18 && val>=1 ){
//         cout<<"He is "<<val<<" and can't vote"<<endl;
//     }
//     else if(val>=18 && val<=100)
//         cout<<"He is "<<val<<" and can vote"<<endl;
//     else {
//         cout<<"He is out of commision"
//     }
// }
// int main(){
//     int n;
//     cout<<"Write the age of a person"<<endl;
//     cin>>n;
//     vote(n);
//     return 0;
// }

// // Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers between them.
// #include <iostream>
// using namespace std;
// void odd(int p, int q)
// {

//     for (int i = p; i <= q; i++)
//     {
//         if (i % 2 != 0)
//             cout << i;
//         else
//         {
//             cout << endl;
//         }
//     }
// }
// int main()
// {
//     int start, end;
//     cout << "Write the range of the odd number to print " << endl;
//     cin >> start >> end;
//     cout << "Odd numbers in range are " << endl;
//     odd(start, end);
//     return 0;
// }

// //or
// #include <iostream>
// using namespace std;
// bool odd(int num)
// {
//     if (num % 2 != 0)
//     {
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int a;
//     int b;
//     cout << "Enter the two numbers : ";
//     cin >> a >> b;
//     for (int i = a; i <= b; i++)
//     {
//         if (odd(i))
//         {
//             cout << i << " ";
//         }
//     }
// }

// // // Q5 - Given two numbers a and b, write a program to print all the prime numbers present between a and b.
// #include <iostream>
// using namespace std;
// bool prime(int num)
// {
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int a;
//     int b;
//     cout << "Enter the two numbers : ";
//     cin >> a >> b;
//     for (int i = a; i <= b; i++)
//     {
//         if (prime(i))
//         {
//             cout << i << " ";
//         }
//     }
// } 
#include <iostream>
using namespace std;
class Solution {
public:
    bool countPrimes(int n) {
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};
int main(){
    Solution dat;
    int count=0;
    for(int i=2;i<10;i++){
        if (dat.countPrimes(i)){
        count++;
        }
    }
    cout<<count;

}