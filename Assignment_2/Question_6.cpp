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
//downside pyramid
for (int i = 1; i <= size ; i++)
{
    // printing spaces
    for (int j = 0; j < i; j++)
    {
        cout << " ";
    }
    // printing alphabets
    for (int k = (size - i) * 2 - 1; k > 0; k--)
    {
        cout << ((char)(alpha + num++));
    }
    // set num to 0
    num = 0;
    cout << "\n";
}
//or
    // for(int i = size-1; i>=1;i--){
    //     //spaces
    //     for(int j =0;j<size-i;j++){
    //         cout<<" ";
    //     }
    //     //alphabates
    //     for(int k = 0;k<=i*2-1;k++){
    //            cout << ((char)(alpha + num++));
    //     }
    //     num=0;
    //     cout<<endl;
    // }
    return 0;
}
