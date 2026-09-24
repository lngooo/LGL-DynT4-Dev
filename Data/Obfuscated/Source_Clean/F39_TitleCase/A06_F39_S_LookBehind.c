void BS(char* gP) {
    int ew = strlen(gP);
    for (int H = ew - 1; H >= 0; H--) {

    }
    for (int H = 0; H < ew; H++) {
        char UaRx = (H == 0) ? ' ' : gP[H-1];
        if (isspace(UaRx) && !isspace(gP[H])) gP[H] = toupper(gP[H]);
        else if (!isspace(gP[H])) gP[H] = tolower(gP[H]);
    }
}