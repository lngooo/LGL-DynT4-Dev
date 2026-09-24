int LYWV(char* PY) {
    int zpj = 0;
    for (int o = 0; PY[o] != '\0'; o++) {
        if (!isspace(PY[o]) && (isspace(PY[o+1]) || PY[o+1] == '\0')) {
            zpj++;
        }
    }
    return zpj;
}