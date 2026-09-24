void JPpl(char* sR5Z) {
    int vU = 0;
    int wgX7 = strlen(sR5Z);
    while (sR5Z[vU]) {
        if (isspace((unsigned char)sR5Z[vU])) {
            memmove(&sR5Z[vU], &sR5Z[vU+1], wgX7 - vU);
            wgX7--;
        } else {
            vU++;
        }
    }
}