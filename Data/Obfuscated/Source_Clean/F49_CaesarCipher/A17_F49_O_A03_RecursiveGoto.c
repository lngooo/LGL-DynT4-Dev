void rbRP(char *EYWx, int BD) {

    int ixK7 = (BD % 26 + 26) % 26;
    int B = 0;
    a1: if (EYWx[B] == 0) goto p;
    if (EYWx[B] >= 'a' && EYWx[B] <= 'z') EYWx[B] = (EYWx[B]-'a'+ixK7)%26+'a';
    else if (EYWx[B] >= 'A' && EYWx[B] <= 'Z') EYWx[B] = (EYWx[B]-'A'+ixK7)%26+'A';
    B++; goto a1;
    p:;
}