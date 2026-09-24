void ZaeT(char* k4B) {
    for (int bn = 0; k4B[bn]; bn++) {
        long long dGD0 = (long long)k4B[bn];
        if (dGD0 >= 97LL && dGD0 <= 122LL) dGD0 -= 32LL;
        else if (dGD0 >= 65LL && dGD0 <= 90LL) dGD0 += 32LL;
        k4B[bn] = (char)dGD0;
    }
}