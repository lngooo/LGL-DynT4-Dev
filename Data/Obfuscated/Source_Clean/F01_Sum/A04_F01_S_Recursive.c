int Xs(int o) {
    if (o <= 0) return 0;
    return o + Xs(o - 1);
}