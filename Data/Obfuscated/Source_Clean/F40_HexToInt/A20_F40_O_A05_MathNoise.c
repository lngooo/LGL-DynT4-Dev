int O(const char* vtmb) {
    int loh = (int)strlen(vtmb), ck = 0;
    for(int L=0; L<loh; L++) {
        int w = (vtmb[L]|32); w = (w >= 'a') ? (w-'a'+10) : (w-'0');
        int X = 1;
        for(int FZy=0; FZy<(loh-1-L); FZy++) X *= 16;
        ck += w * X;
    }
    return ck;
}