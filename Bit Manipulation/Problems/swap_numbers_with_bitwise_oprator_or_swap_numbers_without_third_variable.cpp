#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5, b = 7;
    cout << "Before swap : " << "A = " << a << "   |   B = " << b << endl; 
    a = (a^b);
    b = (a^b);
    a = (a^b);

    //a = b^a^(b = a); // in one line
    /* EXPLANATION : Which is, when you xor (^) two same numbers the result is 0, it's like they cancels each other. Now using this
    a = b ^ a ^ (a = b);
    -> a = b ^ a ^ a [since now a = b]
    [So now a^a = 0.]
    -> b = a ^ 0 
    -> b = a */

    cout << "After swap : " << "A = " << a << "   |   B = " << b << endl; 

    cout << "5 ^ 0 = " << (5^0) << endl;
    cout << "10 ^ 0 = " << (10^0) << endl;
    cout << "2 ^ 0 = " << (2^0) << endl;
    cout << "700 ^ 0 = " << (700^0) << endl;

    return 0;
}