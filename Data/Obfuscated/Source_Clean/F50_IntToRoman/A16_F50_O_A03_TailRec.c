void CNCI(int j, char* Ot) {
wBG:
    if (j <= 0) return;
    if (j >= 1000) { strcat(Ot, "M"); j -= 1000; goto wBG; }
    if (j >= 900) { strcat(Ot, "CM"); j -= 900; goto wBG; }
    if (j >= 500) { strcat(Ot, "D"); j -= 500; goto wBG; }
    if (j >= 400) { strcat(Ot, "CD"); j -= 400; goto wBG; }
    if (j >= 100) { strcat(Ot, "C"); j -= 100; goto wBG; }
    if (j >= 90) { strcat(Ot, "XC"); j -= 90; goto wBG; }
    if (j >= 50) { strcat(Ot, "L"); j -= 50; goto wBG; }
    if (j >= 40) { strcat(Ot, "XL"); j -= 40; goto wBG; }
    if (j >= 10) { strcat(Ot, "X"); j -= 10; goto wBG; }
    if (j >= 9) { strcat(Ot, "IX"); j -= 9; goto wBG; }
    if (j >= 5) { strcat(Ot, "V"); j -= 5; goto wBG; }
    if (j >= 4) { strcat(Ot, "IV"); j -= 4; goto wBG; }
    strcat(Ot, "I"); j -= 1; goto wBG;
}

void qAE(int j, char* Ot) {
    Ot[0] = '\0';
    CNCI(j, Ot);
}