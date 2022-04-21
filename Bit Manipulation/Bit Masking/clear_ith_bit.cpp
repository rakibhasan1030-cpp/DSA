#include<bits/stdc++.h>
using namespace std;
int clearTheBit(int n, int i){
    int mask = ~(1 << i); /* left shift one i time and invert the bits */
    int ans = (n & mask); /* doing AND operation with mask so, that i-th bit became 0 or clear */
    return ans; /* or, simply return (n | (~(1 << i))) [ one line solution ]*/
}

int main(){
    int n, i;

    cout << "Enter your value(in decimal) : ";
    cin>>n;

    cout << "Enter your bit position : ";
    cin>>i;

    /* INPUT - n = 5 (101), i = 1
       OUTPUT - ans = 7 (111), 1-th position bit 0 became 1, which value is 7 */
    cout << "After clear the bit bit at " << i <<"-the position, the new value is = " << clearTheBit(n, i) << endl;

    return 0;
}