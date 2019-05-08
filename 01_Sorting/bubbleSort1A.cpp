#include <iostream>
using namespace std;

// Bubble Sort 1A
void bubbleSort1A(int a[], int n)
{
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 1; i < n; ++i) {
            if (a[i-1] > a[i]) {
                swap(a[i-1], a[i]);
                sorted = false;
            }
        }
        --n;
    }
}
