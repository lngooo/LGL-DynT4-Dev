int w(int V[], int Ue, int kGv) {
    if (Ue <= 0) return -1;
    int DOV = w(V, Ue - 1, kGv);
    if (DOV != -1) return DOV;
    return (V[Ue - 1] == kGv) ? (Ue - 1) : -1;
}