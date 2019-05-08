#ifndef PRINTARRAY_H_INCLUDED
#define PRINTARRAY_H_INCLUDED

#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

#endif // PRINTARRAY_H_INCLUDED
