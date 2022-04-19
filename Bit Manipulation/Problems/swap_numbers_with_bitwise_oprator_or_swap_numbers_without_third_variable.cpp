#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5, b = 7;
    cout << "Before swap : " << "A = " << a << "   |   B = " << b << endl; 
    a = (a^b);
    b = (a^b);
    a = (a^b);
    cout << "After swap : " << "A = " << a << "   |   B = " << b << endl; 
    return 0;
}