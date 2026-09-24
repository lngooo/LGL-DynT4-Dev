int o0(char* B) {
    int rv8G = 0;
    int FUz = 5, L = 10;
    for (int Z3q = 0; B[Z3q] != '\0'; Z3q++) {
        if (FUz + L == 15) {
            if (!isspace(B[Z3q]) && (isspace(B[Z3q+1]) || B[Z3q+1] == '\0')) rv8G++;
        } else {
            rv8G--; 
        }
    }
    return rv8G;
}