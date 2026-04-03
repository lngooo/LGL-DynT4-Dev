void StrCompress(char* s) {
    char *p = s, *q;
outer:
    if (!*p) goto end;
    q = p;
inner:
    if (*q == *p) { q++; goto inner; }
    printf("%c%ld", *p, (long)(q - p));
    p = q;
    goto outer;
end:
    printf("\n");
}