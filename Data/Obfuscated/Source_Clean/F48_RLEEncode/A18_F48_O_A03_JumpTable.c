void R(const char *Ly, char *XkX8) {
    char *p = (char*)Ly;
    int IJz = 0;
OSV:
    if (!*p) return;
    char Q = *p;
    int IIaj = 1;
    while (*(p + IIaj) == Q) IIaj++;
    XkX8[IJz++] = Q;
    IJz += sprintf(XkX8 + IJz, "%d", IIaj);
    p += IIaj;
    goto OSV;
}