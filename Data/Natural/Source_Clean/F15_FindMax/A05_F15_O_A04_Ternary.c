int m_r(int a[], int l, int r) {
    if (l == r) return a[l];
    int m = l + (r-l)/2;
    int v1 = m_r(a, l, m), v2 = m_r(a, m+1, r);
    return (v1 > v2) ? v1 : v2;
}

int FindMax(int arr[], int n) { return (n > 0) ? m_r(arr, 0, n-1) : 0; }