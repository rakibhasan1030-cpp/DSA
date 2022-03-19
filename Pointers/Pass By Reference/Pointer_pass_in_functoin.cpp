#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 10, b = 20;
    cout << "Before SWAP, A : " << a << "   |   " << "B : "<< b << endl;

    int *aPtr, *bPtr;
    aPtr = &a;
    bPtr = &b;
    swap(aPtr, bPtr);
    cout << "After SWAP, A : " << a << "   |   "  << "B : "<< b << endl;
    
    return 0;
}