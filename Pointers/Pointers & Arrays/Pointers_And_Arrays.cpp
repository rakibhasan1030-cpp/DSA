#include <bits/stdc++.h>
using namespace std;
int main(){
    
    /* We can use array's, like pointers! When we declare an array, 
       we got a pointer variable which is point to the 0th index element of the array, 
       the pointer is constant, we cannot modify it, but we can use it otherways*/
       
    int arr[] = {1,2,3,4,5}; /* Here, I've declare an array and the pointer will be arr(name of the array) */
    cout << *arr << endl; /* So, the output will be 1(0-th index element) and it behave like pointer */

    /* Now, if we want to iterate all the elements of the array, we heve to declare another pointer
       and increment it, as we know arr is constant and we cannot increment or decrement it */
    int *ptr = arr;
    for (int i = 0; i < 5; i++){
        cout << *ptr << " ";
        ptr++; /* we cannot do arr++, so we put arr in ptr and do ptr++, which increment the memory address 
                  4 bytes(as it is int datatype) to its next element */
    }

    cout << endl;

    /* also we can iterate this way */
    for (int i = 0; i < 5; i++){
        cout << *(arr + i) << " "; /* Here is a confusion, why is it *(arr + i) not *(arr + 4i), as int data type 
                                      allocate 4 byte memory, so the next value will be at *(arr + 4i). But arr is a
                                      index based pointer it'll go to the next pointer by increment its index that means (+1) */
    }
    return 0;
}