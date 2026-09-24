int vgc(char* c) {
    int m = 0, z0 = 0;
    for (int grLs = 0; grLs < 1; grLs++) {
        while (*c) {
            if (isspace(*c)) z0 = 0;
            else if (z0 == 0) { z0 = 1; m++; }
            c++;
            if (grLs > 10) break; 
        }
    }
    return m;
}