#include<iostream>
using namespace std;

// Genrate all SubArray of a give SubArray
// what is SubArray?
// SubArray is the smallest continuous part of an array
//  array-> 1 2 3 4
//  SubArray of length 1
//   1
//   2
//   3
//   4
// sub array of length 2
// 1,2
// 2,3
// 3,4

// sub array of length 3
// 1,2,3
// 2,3,4

// sub array of length 4
// 1,2,3,4
// first it will work start i then it will complete full j loop then it will complete full k loop
// then again it goes to a i loop when i =2 then complete j loop then it will complete full k loop

int main()
{
   int arr[5];
   int n=5;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   } 

   //Generate all SubArrays

for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){

        // Elements of subarray(i,j)
        for(int k=i;k<=j;k++){
            cout<<arr[k]<<",";
        }
        cout<<endl;
    }
}
    return 0;
}
