void xdSg(int E[], int bj) {
    int *jfp, *a, *jWlE;
    for (jfp = E; jfp < E + bj - 1; jfp++) {
        jWlE = jfp;
        for (a = jfp + 1; a < E + bj; a++) {
            if (*a < *jWlE) jWlE = a;
        }
        int VH = *jWlE;
        *jWlE = *jfp;
        *jfp = VH;
    }
}