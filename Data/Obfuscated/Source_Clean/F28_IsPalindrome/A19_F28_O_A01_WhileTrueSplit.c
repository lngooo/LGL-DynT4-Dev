int d(char *m6) {
    int l = 0;
    int T = 0; while (m6[T]) T++;
    int a = T - 1;
    while(1) {
        if(l >= a) break;
        if(m6[l] != m6[a]) return 0;
        l++; a--;
    }
    return 1;
}