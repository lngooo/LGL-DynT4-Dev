struct lInw { const char *R; const char *Mx; };

int CT(const char *Gj, const char *bNc7) {
    struct lInw Z = {Gj, bNc7};
    while (*Z.R && (*Z.R == *Z.Mx)) {
        Z.R++; Z.Mx++;
    }
    return *(unsigned char *)Z.R - *(unsigned char *)Z.Mx;
}