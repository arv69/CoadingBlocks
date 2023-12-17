#include<iostream>
using namespace std;

//LinearSearch

// A particular element in the array

int main(){


int arr[10];
cout<<"Enter the element "<<endl;
for(int i=0;i<=10-1;i++){
    cin>>arr[i];
}
int key;
cout<<"Enter the element you want to search : "<<endl;
cin>>key;

//Find out the index of that element by traversing the array
//Linear Search Algorithm
bool flag=false;
int k;
for(int i=0;i<=10-1;i++){
    if(arr[i]==key){
        flag=true;
        k=i;
        break;
    }
}

if(flag==true)cout<<key<<" found at index : "<<k<<endl;
else cout<<"Not Found";




    return 0;
}