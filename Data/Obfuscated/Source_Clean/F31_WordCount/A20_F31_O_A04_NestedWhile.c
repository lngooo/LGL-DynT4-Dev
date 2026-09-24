int vag(char* X0Gm) {
    int jv = 0;
    while (*X0Gm) {
        if (isspace(*X0Gm)) {
            while (*X0Gm && isspace(*X0Gm)) X0Gm++;
        } else {
            jv++;
            while (*X0Gm && !isspace(*X0Gm)) {
                if (*X0Gm == 0) break;
                X0Gm++;
            }
        }
    }
    return jv;
}