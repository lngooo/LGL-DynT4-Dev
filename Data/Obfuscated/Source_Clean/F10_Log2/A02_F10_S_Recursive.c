int E(int Gh) {
    if (Gh <= 1) return 0;
    return 1 + E(Gh / 2);
}