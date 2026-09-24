void r(char* WJW) {
    char *Z = WJW, *JQt;
z:
    if (!*Z) goto t;
    JQt = Z;
fQvr:
    if (*JQt == *Z) { JQt++; goto fQvr; }
    printf("%c%ld", *Z, (long)(JQt - Z));
    Z = JQt;
    goto z;
t:
    printf("\n");
}