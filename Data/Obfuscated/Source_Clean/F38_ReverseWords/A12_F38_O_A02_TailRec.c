void U4Y(char *adf) {
    char *HP86 = strrchr(adf, ' ');
    if(!HP86) return;
    int kS = strlen(HP86 + 1);
    char *TCp = (char*)malloc(kS + 1);
    strcpy(TCp, HP86 + 1);
    *HP86 = '\0';
    U4Y(adf);
    char *ey87 = (char*)malloc(strlen(adf) + 1);
    strcpy(ey87, adf);
    sprintf(adf, "%s %s", TCp, ey87);
    free(TCp); free(ey87);
}