void Fwg(int qE, char* raad) {
    if (qE == 0) return;
    if (qE >= 1000) { strcat(raad, "M"); Fwg(qE - 1000, raad); }
    else if (qE >= 900) { strcat(raad, "CM"); Fwg(qE - 900, raad); }
    else if (qE >= 500) { strcat(raad, "D"); Fwg(qE - 500, raad); }
    else if (qE >= 400) { strcat(raad, "CD"); Fwg(qE - 400, raad); }
    else if (qE >= 100) { strcat(raad, "C"); Fwg(qE - 100, raad); }
    else if (qE >= 90) { strcat(raad, "XC"); Fwg(qE - 90, raad); }
    else if (qE >= 50) { strcat(raad, "L"); Fwg(qE - 50, raad); }
    else if (qE >= 40) { strcat(raad, "XL"); Fwg(qE - 40, raad); }
    else if (qE >= 10) { strcat(raad, "X"); Fwg(qE - 10, raad); }
    else if (qE >= 9) { strcat(raad, "IX"); Fwg(qE - 9, raad); }
    else if (qE >= 5) { strcat(raad, "V"); Fwg(qE - 5, raad); }
    else if (qE >= 4) { strcat(raad, "IV"); Fwg(qE - 4, raad); }
    else { strcat(raad, "I"); Fwg(qE - 1, raad); }
}

void HCvH(int qE, char* raad) {
    raad[0] = '\0';
    Fwg(qE, raad);
}