void T0(char *OZR, char *S7I) {
    int L = 0, V7 = 0;
    while(OZR[L]) L++; while(S7I[V7]) V7++;
    for(int t=0; t < L; t += V7) {
        for(int FcBF=0; FcBF < V7 && (t+FcBF) < L; FcBF++) {
            OZR[t+FcBF] ^= S7I[FcBF];
        }
    }
}