void D5YS(int NlDG[], int J0Cy, int olB) {
    if (J0Cy >= olB) return;
    int K = NlDG[J0Cy]; NlDG[J0Cy] = NlDG[olB]; NlDG[olB] = K;
    D5YS(NlDG, J0Cy + 1, olB - 1);
}

void UpTG(int NlDG[], int A7I) {
    if (A7I > 1) D5YS(NlDG, 0, A7I - 1);
}