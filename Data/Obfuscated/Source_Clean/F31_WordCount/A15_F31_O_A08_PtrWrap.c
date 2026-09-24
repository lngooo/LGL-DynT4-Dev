int kPX(char* F) {
    char** Ss = &F;
    int z = 0;
    int QkS = (int)strlen(*Ss);
    for (int ZCw8 = 0; ZCw8 < QkS; ZCw8++) {
        char sPT = (*Ss)[ZCw8];
        char AZ7p = (ZCw8 == 0) ? ' ' : (*Ss)[ZCw8-1];
        if ((sPT != ' ' && sPT != '\t') && (AZ7p == ' ' || AZ7p == '\t')) z++;
    }
    return z;
}