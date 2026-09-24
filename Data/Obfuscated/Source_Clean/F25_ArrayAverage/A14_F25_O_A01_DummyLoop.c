double KvO(int V[], int K) {
    double J = 0;
    for (int I = 0; I < K; I++) {
        for(int ZG=0; ZG<1; ZG++) J += V[I];
    }
    return (K > 0) ? (J / K) : 0.0;
}