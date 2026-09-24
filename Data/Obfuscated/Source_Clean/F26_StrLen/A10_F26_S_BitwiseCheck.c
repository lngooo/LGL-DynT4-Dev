int z0(const char *j1) {
    int Xb = 0;
    while (j1[Xb]) {
        Xb = -~Xb; 
    }
    return Xb;
}