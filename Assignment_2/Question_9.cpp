//Q9- Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
#include <iostream>
using namespace std;

int main()
{
    int n, i, flg1 = 1, flg2 = 1, flg3 = 0, j;
    float sum = 0;
    cout << " To Check Whether a Number can be Express as Sum of Two Prime Numbers"<<endl;
    cout << " Enter a number "<<endl;
    cin >> n;
    for (i = 2; i <= n/2; i++) 
    {
        flg1 = 1;
        flg2 = 1;
        for (j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                flg1 = 0;
                j = i;
            }
        }
        for (j = 2; j < n - i; j++) 
        {
            if ((n - i) % j == 0) 
            {
                flg2 = 0;
                j = n - i;
            }
        }
        if (flg1 == 1 &&  flg2 == 1) 
        {
            cout << n << " = " << i << " + " << n - i << endl;
            flg3 = 1;
        }
    }
    if (flg3 == 0) 
    {
        cout << n << " can not be expressed as sum of two prime numbers." << endl;
    }
}

// #include <iostream>
// using namespace std;

// // check prime
// bool check_prime(int n) {
//   int i;
//   bool is_prime = true;

//   // 0 and 1 are not prime numbers
//   if (n == 0 || n == 1) {
//     is_prime = false;
//   }
  
//   for(i = 2; i <= n/2; ++i) {
//     if(n % i == 0) {
//       is_prime = false;
//       break;
//     }
//   }

//   return is_prime;
// }

// int main() {

//   int n, i;
//   bool flag = false;

//   cout << "Enter a positive  integer: ";
//   cin >> n;

//   for(i = 2; i <= n/2; ++i) {
//     if (check_prime(i)) {
//       if (check_prime(n - i)) {
//         cout << n << " = " << i << " + " << n-i << endl;
//         flag = true;
//       }
//     }
//   }

//   if (flag=false)
//     cout << n << " can't be expressed as sum of two prime numbers.";

//   return 0;
// }

