#include<iostream>
#include<climits>
using namespace std;

int main()
{
   int sizeOfArray=10;
    int arr[sizeOfArray];
   for(int i=0;i<sizeOfArray;i++){
    cin>>arr[i];
   }

    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i=0;i<sizeOfArray;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }

        // Another way
        // largest=max(largest,arr[i]);
        // smallest=min(smallest,arr[i]);
    }

    cout<<"Largest is "<<largest<<endl;
    cout<<"Smallest is "<<smallest<<endl;
    return 0;
}