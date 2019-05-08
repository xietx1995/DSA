#include <iostream>
#include "prototypes.h"
using namespace std;

int main()
{
    int a[] = {3, 8, 2, 9, 3, 5, 0, 1, 4};

    cout << sum_dac(a, 0, 8) << endl;

    return 0;
}
