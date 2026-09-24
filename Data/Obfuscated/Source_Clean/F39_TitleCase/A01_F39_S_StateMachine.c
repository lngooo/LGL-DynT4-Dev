void zl(char* gDI) {
    int lLd = 1;
    for (int Q8 = 0; gDI[Q8] != '\0'; Q8++) {
        if (isspace(gDI[Q8])) {
            lLd = 1;
        } else if (lLd) {
            gDI[Q8] = toupper(gDI[Q8]);
            lLd = 0;
        } else {
            gDI[Q8] = tolower(gDI[Q8]);
        }
    }
}