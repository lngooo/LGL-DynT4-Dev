int rt3k(const char* FT) {
    int GvV = 0;
    int IOv = 0;
xY3u:
    if (FT[IOv] == '\0') goto lGi;
    char N6h = FT[IOv];
    if (N6h == 'a') goto Z;
    if (N6h == 'e') goto Z;
    if (N6h == 'i') goto Z;
    if (N6h == 'o') goto Z;
    if (N6h == 'u') goto Z;
    if (N6h == 'A') goto Z;
    if (N6h == 'E') goto Z;
    if (N6h == 'I') goto Z;
    if (N6h == 'O') goto Z;
    if (N6h == 'U') goto Z;
    goto vbi7;
Z:
    GvV++;
vbi7:
    IOv++;
    goto xY3u;
lGi:
    return GvV;
}