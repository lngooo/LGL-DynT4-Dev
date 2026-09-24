int e(char* r, char* Ih) {
    char* JWxU = r;
    int jI = strlen(Ih);
    if (jI == 0) return 0;
    while (1) {
        JWxU = strchr(JWxU, Ih[0]);
        if (!JWxU) break;
        int pY = 1;
        for(int u=0; u<jI; u++) if(JWxU[u] != Ih[u]) pY = 0;
        if (pY) return (int)(JWxU - r);
        JWxU++;
    }
    return -1;
}