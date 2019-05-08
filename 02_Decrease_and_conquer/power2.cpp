inline long long sqr(long long n) { return  n * n; }

long long power2(int n)
{
    if (n == 0) return 1;
    return (n & 1) ? sqr(power2(n >> 1)) << 1 : sqr(power2(n >> 1));
}
