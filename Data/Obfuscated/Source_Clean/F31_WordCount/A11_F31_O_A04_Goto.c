int D5(char* gS) {
    int AVz = 0;
Kvtf:
    if (!*gS) goto kN;
QeXu:
    if (*gS && isspace(*gS)) { gS++; goto QeXu; }
    if (!*gS) goto kN;
    AVz++;
B:
    if (*gS && !isspace(*gS)) { gS++; goto B; }
    goto Kvtf;
kN:
    return AVz;
}