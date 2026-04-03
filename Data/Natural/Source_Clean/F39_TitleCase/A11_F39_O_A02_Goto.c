void TitleCase(char* s) {
    char* p = s;
    int f = 1;
loop:
    if (!*p) return;
    if (*p == ' ') { f = 1; goto next; }
    if (f) { if(*p >= 'a') *p -= 32; f = 0; }
    else { if(*p <= 'Z' && *p >= 'A') *p += 32; }
next:
    p++;
    goto loop;
}