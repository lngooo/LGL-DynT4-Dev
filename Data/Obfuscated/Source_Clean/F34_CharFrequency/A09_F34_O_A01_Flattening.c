int M(char* ay, char o) {
    int p0GQ = 0, iDF = 0, yhm = 0;
    while (yhm != -1) {
        switch (yhm) {
            case 0: yhm = (ay[iDF] != '\0') ? 1 : 3; break;
            case 1: if (ay[iDF] == o) p0GQ++; yhm = 2; break;
            case 2: iDF++; yhm = 0; break;
            case 3: yhm = -1; break;
        }
    }
    return p0GQ;
}