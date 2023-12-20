// BubbleSort
// Take the larger element towards end!
#include<iostream>
using namespace std;

void BubbleSort(int arr[], int sizeOfArray){
//   we need to traverse till sizeofArray
//   but we are starting from index 1 one not zero

    for(int i=1;i<sizeOfArray;i++){

        // Pairwise Swapping in the unsorted array
        for(int j=0;j<sizeOfArray-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

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
BubbleSort(arr,sizeOfArray);
   for(int i=0;i<sizeOfArray;i++){
    cout<<arr[i]<<",";
   }

    
    return 0;
}