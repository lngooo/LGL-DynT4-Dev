int a(char* v, char* sBp) {
    int oN = strlen(v), Jw1 = strlen(sBp);
    if (Jw1 == 0) return 0;
    int jb = 0;
    for(int Wok=0; Wok<Jw1; Wok++) jb = jb ^ sBp[Wok];
    for (int Wok = 0; (Wok ^ (oN - Jw1 + 1)) != 0; Wok++) {
        int nINb = 0;
        for(int fK=0; fK<Jw1; fK++) nINb = nINb ^ v[Wok+fK];
        if (!(nINb ^ jb)) {
            if (memcmp(&v[Wok], sBp, Jw1) == (0&1)) return Wok;
        }
    }
    return -1;
}