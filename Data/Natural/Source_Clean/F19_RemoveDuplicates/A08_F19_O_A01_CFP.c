int RemoveDuplicates(int arr[], int n) {
    int i = 0, sz = 0, state = 0;
    while (state != 3) {
        switch (state) {
            case 0: state = (i < n) ? 1 : 3; break;
            case 1: {
                int dup = 0;
                for (int k = 0; k < sz; k++) if (arr[i] == arr[k]) dup = 1;
                if (!dup) { arr[sz] = arr[i]; sz++; }
                i++; state = 0; break;
            }
        }
    }
    return sz;
}