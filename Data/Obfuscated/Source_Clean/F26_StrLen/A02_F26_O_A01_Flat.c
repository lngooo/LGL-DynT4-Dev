int h(const char *DA25) {
    int i2MZ = 0, t = 0;
    while (t != 2) {
        switch (t) {
            case 0: if (DA25[i2MZ] != '\0') t = 1; else t = 2; break;
            case 1: i2MZ++; t = 0; break;
        }
    }
    return i2MZ;
}