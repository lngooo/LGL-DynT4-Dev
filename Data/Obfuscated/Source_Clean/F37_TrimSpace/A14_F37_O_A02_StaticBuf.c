static char BFAd[4096];
void YBq(char* a0) {
    int uB3 = 0;
    char *FWC = a0;
    while (*FWC) {
        if (*FWC != ' ' && *FWC != '\t' && *FWC != '\n') {
            *(BFAd + uB3) = *FWC;
            uB3++;
        }
        FWC++;
    }
    *(BFAd + uB3) = '\0';
    strcpy(a0, BFAd);
}