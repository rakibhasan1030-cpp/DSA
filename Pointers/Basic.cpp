#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 100;

    cout<< "Value of 'a' before change : " << a << endl;

    int* aPtr; /* hold address of variable */
    aPtr = &a; /* &a give the address of variable and that variable adress will store in the aPtr */

    cout<< "Address of 'a' from '&a' : " << &a << endl;
    cout<< "Address of 'a' from 'aPtr' : " << aPtr << endl;

    *aPtr = 200;

    cout<< "Value of 'a' after change : " << a << endl;

}