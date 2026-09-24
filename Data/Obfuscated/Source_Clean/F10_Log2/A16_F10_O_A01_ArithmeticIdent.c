int g(int AcJJ) {
    int f = 0;
    unsigned int GJn = (unsigned int)AcJJ;
    while (GJn >= 2) {
        GJn = (GJn - (GJn % 2)) / 2;
        f++;
    }
    return f;
}