#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 100;
    cout << "Value fo 'a' : "  << a << endl;     
    int *p = &a;
    cout << "Address of 'a' : " << p << endl;

    int **q = &p;                                               /* here, q is pointing to p, so q contain the address of p, and p is contain a's address */
    cout << "One time de-reference of q (*q) : " << *q << endl; /* here, we de-reference of q (*q) for one time only,
                                                                   that means it'll give me the value of p which is address
                                                                   of a */

    cout << "Two time de-reference of q (**q) : " << **q << endl; /* here, we de-reference of q (*q) for two time,
                                                                   that means it'll give me the value of a */

    **q = 200;
    cout << "After update **q, new a's value is : "  << a << endl;   
    
                                                                 
    return 0;
}