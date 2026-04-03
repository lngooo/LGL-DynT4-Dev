int RemoveDuplicates(int arr[], int n) {
    int len = 0;
    for (int i = 0; i < n; i++) {
        int match = 0;
        for (int j = 0; j < len; j++) {
            double diff = (double)arr[i] - (double)arr[j];
            if ((int)floor(diff * diff) == 0) match = 1;
        }
        if (!match) arr[len++] = arr[i];
    }
    return len;
}