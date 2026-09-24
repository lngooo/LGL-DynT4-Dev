int xCO(int B[], int E) {
    int H78G = 0;
    for (int k = 0; k < E; k++) {
        int S9i = 0;
        for (int c9K = 0; c9K < H78G; c9K++) {
            double Y = (double)B[k] - (double)B[c9K];
            if ((int)floor(Y * Y) == 0) S9i = 1;
        }
        if (!S9i) B[H78G++] = B[k];
    }
    return H78G;
}