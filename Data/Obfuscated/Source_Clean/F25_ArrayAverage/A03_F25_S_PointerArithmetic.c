double Q(int v[], int tn) {
    if (tn <= 0) return 0.0;
    double jr = 0;
    int P = tn;
    int *wF = v;
    while (P--) jr += *wF++;
    return jr / tn;
}