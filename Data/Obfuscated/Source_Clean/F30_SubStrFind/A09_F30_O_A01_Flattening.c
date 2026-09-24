int AdW(char* c3uX, char* bmQU) {
    int zCM = strlen(c3uX), V6 = strlen(bmQU);
    if (V6 == 0) return 0;
    int EN = 0, P3WO = 0, pM = 0;
    while (EN != -1) {
        switch (EN) {
            case 0: EN = (P3WO <= zCM - V6) ? 1 : 4; break;
            case 1: pM = 0; EN = 2; break;
            case 2: if (pM < V6 && c3uX[P3WO+pM] == bmQU[pM]) { pM++; } 
                    else { EN = (pM == V6) ? 3 : 5; } break;
            case 3: return P3WO;
            case 4: return -1;
            case 5: P3WO++; EN = 0; break;
        }
    }
    return -1;
}