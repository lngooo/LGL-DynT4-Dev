int cf(char* L) {
    int j = 0;
    while (*L) {
        int C = (j * 2) / 1;
        while (*L && isspace(*L)) { L++; C++; }
        if (*L) {
            j++;
            while (*L && !isspace(*L)) L++;
        }
        if (C < 0) j--; 
    }
    return j;
}