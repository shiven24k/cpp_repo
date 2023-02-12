// //Q1 - Write a number to calculate the factorial of the number
// #include<iostream>
// using namespace std;
// int main(){
//     int n,answ=1;
//     cout<<"Enter the number to find factorial of "<<endl;
//     cin>>n;
//     for(int i =1;i<=n;i++){
//         answ=answ*i;
//     }
//     cout<<"THe factorial of "<<n<<" is "<<answ<<endl;
// }

// //Q2 - Write a program to print all Armstrong numbers between 100 to 500.
// #include<iostream>
// using namespace std;
// int main(){

//     for(int n=100;n<500;n++){
//      int answ=0,last;
//         int t=n;
//         while(t!=0){

//          last=t%10;
//          answ=answ+(last*last*last);
//          t=t/10;
//         }
//         if(answ==n){
//             cout<<answ<<endl;
//         }

//     }
//     return 0;

// }

// //Q3 - Write a program to find the sum of n natural numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=0;
//     cout<<"Write the nth number till you want to sum the numbers"<<endl;
//     cin>>n;
//     for(int i = 0;i<=n;i++){
//            sum+=i;
//     }
//     cout<<"The sum of "<<n<<"th number is "<<sum;
// }

// //Q4 - Write a program to reverse a given integer number.
// #include<iostream>
// using namespace std;
// int main(){
//     //first we have to take the last number(n%10)
//     //then remover the last number(n/10)
//     int last = 0;
//     int rev,n;
//     cout<<"This program will reverse the number"<<endl;
//     cout<<"Write the number"<<endl;
//     cin>>n;
//     while(n>0){
//         last=n%10;
//         rev=rev*10 + last;
//         n=n/10;
//     }
//     cout<<"The reverse of "<<n<<" is "<<rev<<endl;

// }

// //Q5 - Write a program to print the cross pattern given below (in the shape of X):
// // *   *
// //  * *
// //   *
// //  * *
// // *   *
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     int n=5;
//     for(i=0;i<=n;i++){
//         for(j=0;j<=n;j++){
//             if((i+j==n) || (i==j)){
//                 cout<<"*";
//             }
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// Q6- Write a program to print alphabet diamond pattern:
//      A
//     ABC
//    ABCDE
//   ABCDEFG
//  ABCDEFGHI
//   ABCDEFG
//    ABCDE
//     ABC
//      A
#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int alpha = 65;
    int num = 0;
    // upside pyramid
    for (int i = 1; i <= size; i++)
    {
        // printing spaces
        for (int j = 1; j <= size - i; j++)
        {
            cout << " ";
        }
        // printing alphabets
        for (int k = 0; k < i * 2 - 1; k++)
        {
            cout << ((char)(alpha + num++));
        }
        // set the number to 0
        num = 0;
        cout << "\n";
    }
    // downside pyramid
    // for (int i = 1; i <= size ; i++)
    // {
    //     // printing spaces
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     // printing alphabets
    //     for (int k = (size - i) * 2 - 1; k > 0; k--)
    //     {
    //         cout << ((char)(alpha + num++));
    //     }
    //     // set num to 0
    //     num = 0;
    //     cout << "\n";
    // }
    //or
    for(int i = size-1; i>=1;i--){
        //spaces
        for(int j =0;j<size-i;j++){
            cout<<" ";
        }
        //alphabates
        for(int k = 0;k<=i*2-1;k++){
               cout << ((char)(alpha + num++));
        }
        num=0;
        cout<<endl;
    }
    return 0;
}