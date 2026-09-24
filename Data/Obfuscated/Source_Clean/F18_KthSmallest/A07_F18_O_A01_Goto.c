int a(int mRQ[], int o, int Z, int Uk) {
    int A = o, u = Z;
JOm:
    if (A > u) return -1;
    int Iz = mRQ[u], hong = A, ula = A;
Puay:
    if (ula >= u) goto Do;
    if (mRQ[ula] > Iz) { ula++; goto Puay; }
    { int Q = mRQ[hong]; mRQ[hong] = mRQ[ula]; mRQ[ula] = Q; hong++; ula++; goto Puay; }
Do:
    { int Q = mRQ[hong]; mRQ[hong] = mRQ[u]; mRQ[u] = Q; }
    if (hong == Uk - 1) return mRQ[hong];
    if (hong > Uk - 1) { u = hong - 1; goto JOm; }
    A = hong + 1; goto JOm;
}