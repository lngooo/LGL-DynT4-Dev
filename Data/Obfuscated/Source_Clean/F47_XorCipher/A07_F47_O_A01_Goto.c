void xt(char *XO, char *Vxf) {
    int kJkl = 0, wa = 0;
    while(Vxf[wa]) wa++;
I:
    if (XO[kJkl] == '\0') goto wU;
    XO[kJkl] = XO[kJkl] ^ Vxf[kJkl % wa];
    kJkl++;
    goto I;
wU:;
}