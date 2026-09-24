int jIKn(int wPZR[], int nvS, int fGX) {
    for (int qn = 0; qn < nvS; qn++) {
        if (*(wPZR + qn) == fGX) return qn;
    }
    return -1;
}