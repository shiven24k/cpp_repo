// //Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.
// #include<iostream>
// using namespace std;
// int main(){
//     int even =0,odd=1;
//     int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i =1;i<n;i++){
//        if(arr[i]%2==0){
//            even++;
//        }
//        else {
//            odd++;

//        }
//     }
//     cout<<"Even numbers in array are "<<even<<endl;
//     cout<<"Odd numbers in array are "<<odd<<endl;
// }

// //Q2 - Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array. Here 1< size <101
// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout<<"Write the length of the array";
//     cin>>n;
//     int *arr = new int[n];
//     for(int i =0;i<n;i++){
//        cin>>arr[i];
//     }
//     int max=0;
//     int min = arr[0];
//     for(int i =0;i<n;i++){
//     if(arr[i]>max)
//       max=arr[i];
//     }

//      for(int i =0;i<n;i++){
//     if(arr[i]<min)
//       min=arr[i];
//     }
//     cout<<"The sum of the greatest and smallest number is "<<min+max;

// }

// //Q3 - Given an integer array and its size, reverse the array and print it . Here 1<size<101
// #include<iostream>
// using namespace std;
// int main(){;
//     int size =5;
//     int arr[]={1,2,3,4,5,6};
//     for(int i = size;i>=0;i--){
//       cout<<arr[i];
//     }

// }

// Q4 - Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
// that they belong to different arrays and are not at the same index. Here 1<size<101
// //Attemp#3
//  #include<iostream>
//  #include <algorithm>
//  using namespace std;
//  int main(){
//    int a[]={5,6,10,4,9};
//    int b[]={1,2,3,4,5};
//    int MinA=INT_MAX,MinB=INT_MAX,indexA=0,indexB=0,Min2A=INT_MAX,Min2B=INT_MAX;
//    //to find the smallest in a and b we make looop
//    //to fint smallest in a
//    int n = sizeof(a)/sizeof(a[0]);
//    for(int i=0;i<n;i++){
//     if(a[i]<MinA){
//       Min2A=MinA;
//       MinA=a[i];
//       indexA=i;  //starting index to chect both index are not equal

//     }
//     else if(a[i]<Min2A){
//       Min2A=a[i];
//     }
//      if(b[i]<MinB){
//       Min2B=MinB;
//       MinB=b[i];
//       indexB=i;  //starting index to chect both index are not equal

//     }
//     else if(b[i]<Min2B){
//       Min2B=b[i];
//     }
//     if(indexA!=indexB){
//       return MinA+MinB;
//     return min(Min2A+MinB,Min2B+MinA);

// ;

//}

// #include <iostream>
// using namespace std;
// int minSum(int a[], int b[], int n)
// {
//   int minA = INT_MAX, minB = INT_MAX, indexA = 0, indexB = 0;
//   int min2A = INT_MAX, min2B = INT_MAX;
//   for (int i = 0; i < n; i++)
//   {
//     if (a[i] < minA)
//     {
//       min2A = minA;
//       minA = a[i];
//       indexA = i;
//     }
//     else if (a[i] < min2A)
//       min2A = a[i];
//     if (b[i] < minB)
//     {
//       min2B = minB;
//       minB = b[i];
//       indexB = i;
//     }
//     else if (b[i] < min2B)
//       min2B = b[i];
//   }
//   if (indexA != indexB)
//     return minA + minB;
//   else  
//     return min(min2A + minB, min2B + minA);
// }
// int main()
// {
//   int a[] = {5, 6, 10, 4, 9};
//   int b[] = {1, 2, 3, 4, 5};
//   int n = sizeof(a) / sizeof(a[0]);
//   cout << minSum(a, b, n);
//   return 0;
// }

// Q5 - Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n)
//  Find and return the only number of the range that is not present in the array. Here 1<n<101.
// #include<iostream>
// using namespace std;
// int arr_missing(int arr[], int n){
//   int missing = -1;
//   int sum =0;
//   for(int i =0 ;i<n;i++){
//     sum+=arr[i];
//   }
//   int range=(n)*(n+1)/2;  
//   missing=range-sum;
//   return missing;
// }
// int main(){
//   int arr[]={8,6,4,2,3,5,0,1};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   int ans=arr_missing(arr,n);
//   cout<<ans;

// }

//Q6 - Given an integer array containing n elements. Find the element in the array for which all the
 //elements to its left are smaller than it and all the elements to the right of it are larger than it.Here 1<n<101

//  #include<iostream>
//  #include<algorithm>
//  using namespace std;
//  int arr_middle_of (int arr[],int n){
//   int leftMaxSide[n];
//   leftMaxSide[0]=INT_MIN;
//   int rightMinSide=INT_MAX;
//   for(int i=1;i<n;i++){
//     leftMaxSide[i]=max(leftMaxSide[i-1],arr[i-1]);
//   }
//  }
//  int main(){
//   int ele=-1;
//   int arr[]={1,6,5,7,10,8,9};
//   int size=sizeof(arr)/sizeof(arr[0]);
//    int a = min(arr[0],arr[6]);
//    int b = max(arr[0],arr[6]);
  
//   for(int i=0;i<size;i++){
//     if(i!=0 && i!=size-1){
//       arr[i]=ele;
//       break;
//     }
//   }
//   cout<<ele;
 
//  }
#include<iostream>
#include<vector>
using namespace std;
int findelement(int a[],int n){
  vector<int> l(n,0),r(n,0);
  l[0]=a[0];
  r[n-1]=a[n-1];
  for(int i=1;i<n;i++){
    l[i]=max(l[i-1],a[i]);
  }
  for(int i=n-2;i>=0;i--){
    r[i]=min(r[i+1],a[i]);
  }
  for(int i=1;i<n-1;i++){
    if(a[i]>=l[i-1] && a[i]<=r[i+1]) // l[i-1]<=a[i]<=l[i+1]
      return a[i];
  }
  return -1;
}
int main(){
  int arr[]={4,2,1,3,5,7,6,8};
  int size=sizeof(arr)/sizeof(arr[0]);
  int a =findelement(arr,size);
  if (a!=-1){
     cout<<a;
  } 
  else
     cout<<"It doesn't exist"<<a<<endl;
}
