long long fib(int n)
{
    long long a = 0, b = 1;
    while (0 < n--) {
        a += b;
        b = a - b;
    }

    return a;
}
