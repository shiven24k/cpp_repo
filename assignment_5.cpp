// Q1 - Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
// two arrays into a single sorted array of size m+n.
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int a=n+m;
    int arrsum[a];
    sort(arr1,arr1+m); //to sort array
    sort(arr2,arr2+n); //we used sort 

    //our array is sorted then we have to merge in on our new array arrsum
    // adding two array in ascending order
    // We can first sort the array in ascending order and then merge
    // or we can first merge the array and then sort // Declare the arrays
    int i=0,j =0,k=0;
    while(i<n && j<m){
    //taking smallest element and puttin git in arrsum
        if(arr1[i]<arr2[j]){
            arrsum[k++]=arr1[i++];
        }
        else
            arrsum[k++]=arr2[j++];
    }    
    //putting remaining element
    while(i<n){
            arrsum[k++]=arr1[i++];
    }
    while(j<m){
            arrsum[k++]=arr2[j++];
    }


    cout<<"THe merged sorted array is : "<<endl;
    //printing arrsum    
    for(int i =0;i<a;i++){
        cout<<arrsum[i];
    }
}
