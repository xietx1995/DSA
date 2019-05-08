long long fib(int n, long long &prev)
{
    if (n == 0) {
        prev = 1;
        return 0;
    }
    long long prevPrev;
    prev = fib(n - 1, prevPrev);
    return prev + prevPrev;
}
