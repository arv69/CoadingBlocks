#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[1000];
    char largest[1000];
    int len=0;
    int largestLen=0;
    // this is used to reomve a first empty line is created by cin.getline()
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        len=strlen(a);
        if(len>largestLen){
            largestLen=len;
            strcpy(largest,a);
            // copy the char of a[] into largest

        }
    }  
    cout<<largest<<" and "<<largestLen<<endl;
    return 0;
}