int sum_dac(int A[], int lo, int hi)
{
    if (lo == hi)
        return A[lo];
    int mid = (lo + hi) >> 1;
    return sum_dac(A, lo, mid) + sum_dac(A, mid + 1, hi);
}
