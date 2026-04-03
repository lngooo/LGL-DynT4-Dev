struct StrContext { const char *a; const char *b; };

int StrCmp(const char *s1, const char *s2) {
    struct StrContext ctx = {s1, s2};
    while (*ctx.a && (*ctx.a == *ctx.b)) {
        ctx.a++; ctx.b++;
    }
    return *(unsigned char *)ctx.a - *(unsigned char *)ctx.b;
}