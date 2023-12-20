// Selection Sort
// Arrange a Randomly Shuffled array in increasing/decreasing order
// 5 4 1 3 2 -> 1 2 3 4 5
#include<iostream>
using namespace std;
void selectionSort(int arr[],int sizeOfArray){
    for(int i=0;i<sizeOfArray;i++){
        //find out the smallest element index in the unsorted part
        int minIndex=i;
        for(int j=i;j<sizeOfArray;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        // After this loop we can do swap finally
        swap(arr[i],arr[minIndex]);
    }
}
int main()
{
    
int arr[10];
cout<<"Enter the element "<<endl;
for(int i=0;i<10;i++){
    cin>>arr[i];
}
int sizeOfArray=10;
selectionSort(arr,sizeOfArray);
   for(int i=0;i<sizeOfArray;i++){
    cout<<arr[i]<<",";
   }


    return 0;
}