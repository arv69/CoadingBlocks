#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    cout << arr << " ";
    cout << sizeof(arr) << endl;
    // There is a no need to use a for loop for Printing

    char s[] = "kalpesh";
    // '\0' add by default at the end of array

    cout << s << " " << sizeof(s) << endl;

    return 0;
}