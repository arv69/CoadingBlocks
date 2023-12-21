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


int main()
{
   int arr[4]={1,2,3,4};
   int n=4;
   

   //Generate all SubArrays
 int maxSum=0;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        
        // Elements of subarray(i,j)
        int currSum=0;

        for(int k=i;k<=j;k++){
         currSum=currSum+arr[k];
        }
        if(currSum>maxSum){
            maxSum=currSum;
        }
        
    }
}
cout<<maxSum;
    return 0;
}