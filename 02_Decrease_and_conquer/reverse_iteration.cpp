#include <iostream>
using namespace std;

void reverseIter(int A[], int low, int high)
{
    while(low < high)
        swap(A[low++], A[high--]);
}
