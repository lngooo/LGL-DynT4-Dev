int Zc8(char* Q1, char UMTS) {
    int GsP[256];
    memset(GsP, 0, sizeof(GsP));
    for(char* t4 = Q1; *t4; t4++) {
        (*(GsP + (unsigned char)*t4))++;
    }
    return *(GsP + (unsigned char)UMTS);
}