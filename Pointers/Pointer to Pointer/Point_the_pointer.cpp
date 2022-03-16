#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 100;
    int *p = &a;
    cout << "Address of 'a' : " << p << endl;

    int **q = &p; /* here, q is pointing to p, so q contain the address of p, and p is contain a's address */

    return 0;
}