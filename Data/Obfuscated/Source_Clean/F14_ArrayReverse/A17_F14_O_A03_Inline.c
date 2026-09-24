void M(int TF[], int O) {
    for (int wAa = 0; wAa < (O >> 1); wAa++) {
        TF[wAa] += TF[O - 1 - wAa];
        TF[O - 1 - wAa] = TF[wAa] - TF[O - 1 - wAa];
        TF[wAa] = TF[wAa] - TF[O - 1 - wAa];
    }
}