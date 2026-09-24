int zh(int LM) {
    int N = 1, A = LM, qnQ = 0;
    while (N < A) {
        qnQ += (N + A);
        N++;
        A--;
    }
    if (N == A) qnQ += N;
    return qnQ;
}