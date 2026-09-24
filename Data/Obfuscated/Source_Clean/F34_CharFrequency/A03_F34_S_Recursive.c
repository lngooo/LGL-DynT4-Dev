int Xr(char* IjpL, char GrO) {
    if (*IjpL == '\0') return 0;
    return (*IjpL == GrO ? 1 : 0) + Xr(IjpL + 1, GrO);
}