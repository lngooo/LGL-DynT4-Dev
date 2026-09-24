int So(const char *oC, const char *ja) {
    int p9b = 0;
    while(oC[p9b] == ja[p9b] && oC[p9b] != '\0') p9b++;
    return (unsigned char)oC[p9b] - (unsigned char)ja[p9b];
}