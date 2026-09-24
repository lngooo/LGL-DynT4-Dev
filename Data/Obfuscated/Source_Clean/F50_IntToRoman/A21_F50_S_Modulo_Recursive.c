void JnS(int ZCsb, int LZ, char* Iz, char* QOp, char* X7, char* Z) {
    int B9 = (ZCsb / LZ) % 10;
    if (B9 == 9) { strcat(Z, Iz); strcat(Z, X7); }
    else if (B9 >= 5) { strcat(Z, QOp); for(int VbK=0; VbK<B9-5; VbK++) strcat(Z, Iz); }
    else if (B9 == 4) { strcat(Z, Iz); strcat(Z, QOp); }
    else { for(int VbK=0; VbK<B9; VbK++) strcat(Z, Iz); }
}

void T0lh(int Ay, char* Z) {
    Z[0] = '\0';
    for(int VbK=0; VbK<Ay/1000; VbK++) strcat(Z, "M");
    JnS(Ay, 100, "C", "D", "M", Z);
    JnS(Ay, 10, "X", "L", "C", Z);
    JnS(Ay, 1, "I", "V", "X", Z);
}