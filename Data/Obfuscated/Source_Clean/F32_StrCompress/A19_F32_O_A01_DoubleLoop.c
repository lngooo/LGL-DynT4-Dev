void C5(char* bX) {
    int PF = strlen(bX);
    for (int o8JG = 0; o8JG < PF; ) {
        int hr, HqS = 0;
        char r = bX[o8JG];
        for (hr = o8JG; hr < PF && bX[hr] == r; hr++) {
            HqS++;
        }
        printf("%c%d", r, HqS);
        o8JG = hr;
    }
    printf("\n");
}