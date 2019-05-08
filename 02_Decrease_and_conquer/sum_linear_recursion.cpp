int sum(int A[], int n)
{
    if (n < 1) {
        return 0;
    }
    return sum(A, n-1) + A[n-1];
}
