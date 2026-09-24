int aK(const char* EfnR) {
    int fM9h = 0;
    for (; *EfnR; EfnR++) {
        char zd = *EfnR;
        fM9h += (zd=='a'?1:(zd=='e'?1:(zd=='i'?1:(zd=='o'?1:(zd=='u'?1:
                 (zd=='A'?1:(zd=='E'?1:(zd=='I'?1:(zd=='O'?1:(zd=='U'?1:0))))))))));
    }
    return fM9h;
}