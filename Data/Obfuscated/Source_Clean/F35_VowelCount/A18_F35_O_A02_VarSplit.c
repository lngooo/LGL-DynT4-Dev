int hDe(const char* k9n) {
    int b = 0, PK = 0;
    const char* X7 = "aeiouAEIOU";
    for(int Qbf=0; k9n[Qbf]; Qbf++) {
        if (strchr(X7, k9n[Qbf])) {
            if (Qbf % 2 == 0) b++; else PK++;
        }
    }
    return b + PK;
}