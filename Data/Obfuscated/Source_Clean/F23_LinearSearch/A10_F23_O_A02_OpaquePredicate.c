int n3(int Lpfj[], int N1EH, int dX) {
    if (N1EH <= 0) return -1;
    if ((N1EH * N1EH + N1EH) % 2 == 0) {
        int qAtV = n3(Lpfj, N1EH - 1, dX);
        if (qAtV != -1) return qAtV;
        return (Lpfj[N1EH - 1] == dX) ? (N1EH - 1) : -1;
    }
    return -1;
}