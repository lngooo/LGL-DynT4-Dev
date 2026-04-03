int RemoveDuplicates(int arr[], int n) {
    int *base = arr;
    int *write_p = arr;
    for (int i = 0; i < n; i++) {
        int *check = base;
        int found = 0;
        while (check < write_p) {
            if (*check == *(base + i)) { found = 1; break; }
            check++;
        }
        if (!found) *write_p++ = *(base + i);
    }
    return (int)(write_p - base);
}