void bxUr(char* DXU) {
SKRr:
    if (!*DXU) return;
    static int vYDz = 1;
    if (isspace(*DXU)) {
        vYDz = 1;
    } else {
        *DXU = vYDz ? toupper(*DXU) : tolower(*DXU);
        vYDz = 0;
    }
    DXU++;
    goto SKRr;
}