void uU(char *rN) {
    char *v2 = strchr(rN, ' ');
    if(!v2) return;
    char ta[256]; strcpy(ta, v2 + 1);
    uU(ta);
    int S = v2 - rN;
    rN[S] = '\0';
    char G[256]; strcpy(G, rN);
    sprintf(rN, "%s %s", ta, G);
}