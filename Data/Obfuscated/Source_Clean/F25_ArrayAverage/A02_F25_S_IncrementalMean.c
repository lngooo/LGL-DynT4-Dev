double Lt(int La[], int xUG) {
    if (xUG <= 0) return 0.0;
    double EN5k = 0;
    for (int PjL = 0; PjL < xUG; PjL++) {
        EN5k += (La[PjL] - EN5k) / (PjL + 1);
    }
    return EN5k;
}