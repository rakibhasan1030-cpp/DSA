#include<bits/stdc++.h>
using namespace std;

int setTheBit(int n, int i){
    int mask = (1 << i); /* left shift one i time */
    int ans = (n | mask); /* doing OR operation with mask so, that i-th bit 0 became 1 */
    return ans; /* or, simply return (n | (1 << i)) [ one line solution ]*/
}

int main(){
    int n, i;

    cout << "Enter your value(in decimal) : ";
    cin>>n;

    cout << "Enter your bit position : ";
    cin>>i;

    /* INPUT - n = 5 (101), i = 1
       OUTPUT - ans = 7 (111), 1-th position bit 0 became 1, which value is 7 */
    cout << "After set bit 1, at " << i << "-the position, the new value is = " << setTheBit(n, i) << endl;

    return 0;
}