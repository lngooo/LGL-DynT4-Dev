void pEI(char* eJ) {
    for (int M8jG = 0; eJ[M8jG]; M8jG++) eJ[M8jG] = tolower(eJ[M8jG]);
    if (eJ[0] != '\0') eJ[0] = toupper(eJ[0]);
    for (int M8jG = 1; eJ[M8jG]; M8jG++) {
        if (isspace(eJ[M8jG-1])) eJ[M8jG] = toupper(eJ[M8jG]);
    }
}