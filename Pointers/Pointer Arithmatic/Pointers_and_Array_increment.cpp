#include <bits/stdc++.h>
using namespace std;

void exampleOne()
{
    cout << endl;
    cout << "---------- EXAMPLE ONE ----------" << endl;
    int arr[] = {10, 20, 30, 40, 50};
    cout << *arr << endl; /* it will point the first value of array */

    int *ptr = arr; /* it will point the first value of array */
    cout << "ARRAY : ";
    for(int i = 0; i < 5; i++){
        cout << *ptr << "   ";
        ptr++; /* this will increament the address+4 (per int = 4byte), which will be the next value's address */
    }
    cout << endl;
}

int main()
{
    exampleOne();
    return 0;
}