#include <iostream>
#include "prototypes.h"
#include "../PrintFunctions/printArray.h"

using namespace std;

int main()
{
    int a[] = {3, 8, 2, 9, 3, 5, 0, 1, 4};

    cout << sum(a, 9) << endl;

    reverse(a, 0, 8);
    reverseIter(a, 0, 8);

    printArray(a, 9);

    cout << power2(10) << endl;

    long long prev;
    cout << fib(10, prev) << endl;

    return 0;
}
