#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a, int b){
    cout<<"Comparing "<<a<<" and "<<b<<endl;
    return a>b;
}
                  //  here is how we have passing function inside function
                                                        // |
                                                        // V
void BubbleSort(int arr[], int sizeOfArray ,bool(&cmp)(int a,int b)){
//   we need to traverse till sizeofArray
//   but we are starting from index 1 one not zero

    for(int i=1;i<sizeOfArray;i++){

        // Pairwise Swapping in the unsorted array
        for(int j=0;j<sizeOfArray-i;j++){
            // here is the change
            if(cmp(arr[j],arr[j+1])){
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
sort(arr,arr+sizeOfArray,compare);
   for(int i=0;i<sizeOfArray;i++){
    cout<<arr[i]<<",";
   }

    
    return 0;
}
