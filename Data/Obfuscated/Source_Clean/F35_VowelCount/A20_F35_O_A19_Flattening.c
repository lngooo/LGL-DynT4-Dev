int h3(const char* ADWQ) {
    int dh = 0, h = 1;
    while (h) {
        if (*ADWQ == 0) { h = 0; }
        else {
            char y = *ADWQ;
            int gi6l = (y=='a'||y=='e'||y=='i'||y=='o'||y=='u'||
                       y=='A'||y=='E'||y=='I'||y=='O'||y=='U') ? 1 : 0;
            dh += gi6l;
            ADWQ++;
        }
    }
    return dh;
}