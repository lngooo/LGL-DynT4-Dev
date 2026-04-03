void CaseToggle(char* s) {
    char t[256];
    for(int j=0; j<256; j++) t[j] = (char)j;
    for(int j='a'; j<='z'; j++) t[j] = (char)(j - 32);
    for(int j='A'; j<='Z'; j++) t[j] = (char)(j + 32);

    char *p = s;
    while(*p) {
        *p = *(t + (unsigned char)*p);
        p++;
    }
}