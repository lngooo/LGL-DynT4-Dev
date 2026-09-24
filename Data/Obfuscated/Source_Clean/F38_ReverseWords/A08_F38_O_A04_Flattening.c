void P(char *xt3f) {
    int T = 0, sa, Iugz = strlen(xt3f), XNE; char H[256] = "";
    while(T != 99) {
        switch(T) {
            case 0: XNE = Iugz; sa = Iugz - 1; T = 1; break;
            case 1: T = (sa >= -1) ? 2 : 4; break;
            case 2: if(sa == -1 || xt3f[sa] == ' ') {
                        strncat(H, xt3f + sa + 1, XNE - sa - 1);
                        if(sa != -1) strcat(H, " ");
                        XNE = sa;
                    }
                    T = 3; break;
            case 3: sa--; T = 1; break;
            case 4: strcpy(xt3f, H); T = 99; break;
        }
    }
}