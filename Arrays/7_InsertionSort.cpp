//InsertionSort
// Insert the current element in 'right' position!
#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){

    for(int i=1;i<n;i++){
        int element=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>element){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=element;

    }

}

int main()
{
    
int arr[5];
cout<<"Enter the element "<<endl;
for(int i=0;i<5;i++){
    cin>>arr[i];
}
int sizeOfArray=5;
insertionSort(arr,sizeOfArray);
   for(int i=0;i<sizeOfArray;i++){
    cout<<arr[i]<<",";
   }


    return 0;
}