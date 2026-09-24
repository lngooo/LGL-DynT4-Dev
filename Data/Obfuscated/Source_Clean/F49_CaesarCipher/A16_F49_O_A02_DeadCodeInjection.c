void ZcvN(char *kNG, int iOs) {

    char *U = kNG;
    int O = (iOs % 26 + 26) % 26;
    while(*U) {
        if(0) { O = O + 1; }
        if(*U >= 'A' && *U <= 'Z') *U = (*U - 'A' + O) % 26 + 'A';
        else if(*U >= 'a' && *U <= 'z') *U = (*U - 'a' + O) % 26 + 'a';
        U++;
    }
}