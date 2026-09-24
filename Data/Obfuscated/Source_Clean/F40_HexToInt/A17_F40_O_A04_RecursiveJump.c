int JFwZ(const char* dE, int Z) {
    if (Z < 0) return 0;
    int bq = (dE[Z]|32);
    bq = (bq >= 'a') ? (bq-'a'+10) : (bq-'0');
    return bq + (JFwZ(dE, Z - 1) * 16);
}
int Bk(const char* dE) {
    return JFwZ(dE, (int)strlen(dE) - 1);
}