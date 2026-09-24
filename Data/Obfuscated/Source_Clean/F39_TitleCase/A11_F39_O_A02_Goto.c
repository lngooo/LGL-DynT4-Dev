void i(char* O) {
    char* dr = O;
    int o2 = 1;
iT:
    if (!*dr) return;
    if (*dr == ' ') { o2 = 1; goto Fw27; }
    if (o2) { if(*dr >= 'a') *dr -= 32; o2 = 0; }
    else { if(*dr <= 'Z' && *dr >= 'A') *dr += 32; }
Fw27:
    dr++;
    goto iT;
}