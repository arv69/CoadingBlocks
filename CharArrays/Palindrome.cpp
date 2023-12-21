#include <bits/stdc++.h>
using namespace std;
bool palindrome(char a[], int size)
{
    int i = 0;
    int j = size;
    while (i < j)
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char a[1000];
    cin.getline(a, 1000);
    int size = strlen(a) - 1;
    cout << palindrome(a, size);
    return 0;
}