static int TL[256];
int pF(char* buG4, char* y) {
    memset(TL, 0, sizeof(TL));
    int Nu = 0;
    while(buG4[Nu]) { TL[(unsigned char)buG4[Nu]]++; Nu++; }
    Nu = 0;
    while(y[Nu]) { TL[(unsigned char)y[Nu]]--; Nu++; }
    for(Nu=0; Nu<256; Nu++) if(TL[Nu] != 0) return 0;
    return (strlen(buG4) == strlen(y));
}