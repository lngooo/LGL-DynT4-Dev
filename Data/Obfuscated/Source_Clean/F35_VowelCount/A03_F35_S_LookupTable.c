int nzt(const char* u) {
    static int Dgu[256] = {0};
    Dgu['a'] = Dgu['e'] = Dgu['i'] = Dgu['o'] = Dgu['u'] = 1;
    Dgu['A'] = Dgu['E'] = Dgu['I'] = Dgu['O'] = Dgu['U'] = 1;
    int mgn = 0;
    for (; *u; u++) {
        if (Dgu[(unsigned char)*u]) mgn++;
    }
    return mgn;
}