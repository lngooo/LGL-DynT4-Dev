int q3q(const char* NTUh) {
    unsigned long long CM = 0;
    char alKl[] = "aeiouAEIOU";
    for(int ekdv=0; alKl[ekdv]; ekdv++) CM |= (1ULL << (alKl[ekdv] % 64));
    int Q5 = 0;
    while(*NTUh) {
        if (CM & (1ULL << (*NTUh % 64))) {

            char WH6F = *NTUh;
            if (WH6F=='a'||WH6F=='e'||WH6F=='i'||WH6F=='o'||WH6F=='u'||WH6F=='A'||WH6F=='E'||WH6F=='I'||WH6F=='O'||WH6F=='U')
                Q5++;
        }
        NTUh++;
    }
    return Q5;
}