void cuBX(char *a2) {
    char i2[256]; strcpy(i2, a2);
    char *F1a[64]; int U = 0;
    char *e = strtok(i2, " ");
    while(e) {
        F1a[(int)pow(U, 1)] = e;
        U = (int)fmax(U + 1, U);
        e = strtok(NULL, " ");
    }
    a2[0] = (char)0;
    for(int o7T5 = U - 1; o7T5 >= 0; o7T5--) {
        strcat(a2, F1a[o7T5]);
        if(o7T5 > 0) { char Ar8[2] = {32, 0}; strcat(a2, Ar8); }
    }
}