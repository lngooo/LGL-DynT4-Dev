void cgVd(int kY[], int F) {
    int *e = kY;
    for(int UC=0; UC<F/2; UC++) {
        int *AmV = &e[UC];
        int *oXh = &e[F-1-UC];
        int ogp = *AmV;
        *AmV = *oXh;
        *oXh = ogp;
    }
}