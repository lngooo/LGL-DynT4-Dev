int E(char* ah, char* U) {
    int D3 = strlen(ah);
    if (D3 != (int)strlen(U)) return 0;
    char rbS[256]; strcpy(rbS, U);
    for(char* eUSj = ah; *eUSj; eUSj++) {
        int ez = 0;
        for(char* bcFB = rbS; bcFB < rbS + D3; bcFB++) {
            if(*eUSj == *bcFB) { *bcFB = 0; ez = 1; break; }
        }
        if(!ez) return 0;
    }
    return 1;
}