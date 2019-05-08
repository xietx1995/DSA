#include <iostream>

using namespace std;

void reverse(int A[], int low, int high)
{
    if (low < high) {
        swap(A[low], A[high]);
        reverse(A, low + 1, high - 1);
    }
}
