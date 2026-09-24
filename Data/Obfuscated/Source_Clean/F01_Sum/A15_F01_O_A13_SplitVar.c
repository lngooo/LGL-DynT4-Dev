int R(int d) {
    int UvZ3 = 0, p = 0;
    for (int mI = 1; mI <= d; mI++) {
        if (mI % 2 == 0) UvZ3 += mI;
        else p += mI;
    }
    return UvZ3 + p;
}