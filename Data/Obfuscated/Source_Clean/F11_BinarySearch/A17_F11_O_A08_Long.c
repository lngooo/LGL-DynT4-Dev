int WnAJ(int lxJJ[], int qtKw, int Vi23) {
    long long V = qtKw, CY = Vi23;
    long long gn = sqrt(V), YvZJ = 0;
    while (lxJJ[(gn < V ? gn : V) - 1] < CY) {
        YvZJ = gn; gn += sqrt(V);
        if (YvZJ >= V) return -1;
    }
    while (lxJJ[YvZJ] < CY) {
        YvZJ++;
        if (YvZJ == (gn < V ? gn : V)) return -1;
    }
    return (lxJJ[YvZJ] == CY) ? (int)YvZJ : -1;
}