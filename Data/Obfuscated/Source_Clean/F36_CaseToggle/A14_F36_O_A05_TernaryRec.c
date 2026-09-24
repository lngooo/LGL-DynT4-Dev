void LeH(char* iS) {
    if (!*iS) return;
    *iS = (*iS >= 'a' && *iS <= 'z') ? (*iS - 32) : ((*iS >= 'A' && *iS <= 'Z') ? (*iS + 32) : *iS);
    LeH(iS + 1);
}