void OjWA(char *bimw, int x) {

    int bex = 0, Ra = 0, C = (x % 26 + 26) % 26;
    while (bex != 4) {
        switch (bex) {
            case 0: if (bimw[Ra]) bex = 1; else bex = 4; break;
            case 1: if (bimw[Ra]>='a'&&bimw[Ra]<='z') bimw[Ra]=(bimw[Ra]-'a'+C)%26+'a'; bex=2; break;
            case 2: if (bimw[Ra]>='A'&&bimw[Ra]<='Z') bimw[Ra]=(bimw[Ra]-'A'+C)%26+'A'; bex=3; break;
            case 3: Ra++; bex = 0; break;
        }
    }
}