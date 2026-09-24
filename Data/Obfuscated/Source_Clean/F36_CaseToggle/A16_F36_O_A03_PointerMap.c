void LpI(char* T) {
    char Kau[256];
    for(int QT=0; QT<256; QT++) Kau[QT] = (char)QT;
    for(int QT='a'; QT<='z'; QT++) Kau[QT] = (char)(QT - 32);
    for(int QT='A'; QT<='Z'; QT++) Kau[QT] = (char)(QT + 32);

    char *u = T;
    while(*u) {
        *u = *(Kau + (unsigned char)*u);
        u++;
    }
}