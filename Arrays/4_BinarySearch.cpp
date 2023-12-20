// BinarySearch In Sorted Array and Lot More
// BinarySearch can be applied in only Sorted array only
#include<iostream>
using namespace std;

int binarSearch(int arr[],int key ,int sizeOfArray){
    int start=0;
    int end=sizeOfArray-1;
     while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key)return mid;
        else if(arr[mid]>key){
              end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
     }
     return -1;
}

int main()
{
    

int arr[10];
cout<<"Enter the element "<<endl;
for(int i=0;i<=10-1;i++){
    cin>>arr[i];
}
int key;
cout<<"Enter the element you want to search : "<<endl;
cin>>key;
int sizeOfArray=10;
int ans=binarSearch(arr,key ,sizeOfArray);
    cout<<ans;
    
    return 0;
}