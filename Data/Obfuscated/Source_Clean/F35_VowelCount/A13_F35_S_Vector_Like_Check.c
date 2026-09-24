int lj(const char* VA) {
    char gU[] = {'a','e','i','o','u','A','E','I','O','U'};
    int ZuQ2 = 0;
    for (; *VA; VA++) {
        for (int O = 0; O < 10; O++) {
            if (*VA == gU[O]) { ZuQ2++; break; }
        }
    }
    return ZuQ2;
}