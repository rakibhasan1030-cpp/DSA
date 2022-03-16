#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 100;

    int *aPtr = &a;
    cout << "Address of 'a' : " << aPtr << endl;
    aPtr++;
    cout << "Address of 'a' (after inrement) : " << aPtr << endl; /* this will increament the address+4, because we know, int allcate 4byte in memory */
    return 0;
}