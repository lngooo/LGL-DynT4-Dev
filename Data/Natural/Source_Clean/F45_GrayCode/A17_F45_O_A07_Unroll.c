unsigned int GrayCode(unsigned int n) {
    unsigned int r = 0;
    for (int i = 0; i < 32; i += 4) {
        if(((n>>i)&1) != ((n>>(i+1))&1)) r |= (1U<<i);
        if(((n>>(i+1))&1) != ((n>>(i+2))&1)) r |= (1U<<(i+1));
        if(((n>>(i+2))&1) != ((n>>(i+3))&1)) r |= (1U<<(i+2));
        if(((n>>(i+3))&1) != ((n>>(i+4))&1)) r |= (1U<<(i+3));
    }
    return r;
}