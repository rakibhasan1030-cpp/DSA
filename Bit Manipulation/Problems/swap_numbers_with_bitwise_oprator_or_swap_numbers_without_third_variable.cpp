#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5, b = 7;
    cout << "Before swap : " << "A = " << a << "   |   B = " << b << endl; 
    a = (a^b);
    b = (a^b);
    a = (a^b);

    //a = b^a^(b = a); 
    /* Which is, when you xor (^) two same numbers the result is 0, it's like they cancels each other. Now using this
    a = b ^ a ^ (a = b);
    -> a = b ^ a ^ a [since now a = b]
    [So now a^a = 0.]
    -> b = a ^ 0 
    -> b = a */

    cout << "After swap : " << "A = " << a << "   |   B = " << b << endl; 
    return 0;
}