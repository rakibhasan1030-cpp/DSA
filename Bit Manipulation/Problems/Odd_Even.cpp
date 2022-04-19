#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Input : ";
    cin >> n;
    
    /* If we mask 1 with & operation with a number, then we can find the last bit of that number,
        and if we get the last bit of any number then we can say, 1 = ODD and 0 = EVEN */
    if ((n & 1) == 0){ 
        cout << n << " is a Even Number." << endl;
    }else{
        cout << n << " is a ODD Number." << endl;
    }
    return 0;
}