//Q7- Write a program to print + pattern given below :
//     +
//     +
//     +
// ++++++++++
//     +
//     +
//     +
#include<iostream>
using namespace std;
int main(){
    int n =8;
    for(int i =1;i<n;i++){
        for(int j =1;j<n;j++){
            if(j==4 || i==4){
                cout<<"*";
            }
            else {
                cout<<" ";
            }

        }

        cout<<endl;
    }

}
// //or
// //just half everything
// #include <iostream>
// using namespace std;
// int main()
// {
//     // size of plus, use odd number
//     int size = 5;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             // print only stars in middle row
//             if (i == size / 2)
//             {
//                 cout << "*";
//             }
//             // other than middle row, print star only at index size/2
//             else
//             {
//                 if (j == size / 2)
//                 {
//                     cout << "*";
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

