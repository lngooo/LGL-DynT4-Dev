double G6(int k[], int h8) {
    double VMwV = 0;
    for (int Amn = 0; Amn < h8; Amn++) VMwV += *(k + Amn);
    return VMwV / (double)h8;
}