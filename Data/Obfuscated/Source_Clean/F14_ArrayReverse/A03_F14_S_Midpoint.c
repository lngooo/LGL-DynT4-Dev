void DHf(int p[], int OVQ9) {
    for (int R = 0; R < OVQ9 / 2; R++) {
        int Nd5 = p[R];
        p[R] = p[OVQ9 - 1 - R];
        p[OVQ9 - 1 - R] = Nd5;
    }
}