long long e(long long csAl, long long exp, long long XP) {
    long long x5yC = 1;
    csAl %= XP;
    while (exp > 0) {
        if (exp % 2 == 1) x5yC = (x5yC * csAl) % XP;
        csAl = (csAl * csAl) % XP;
        exp /= 2;
    }
    return x5yC;
}

int yfR9(int P3) {
    if (P3 <= 1) return 0;
    if (P3 <= 3) return 1;

    if (e(2, P3 - 1, P3) != 1) return 0;

    for (int hlI = 2; hlI * hlI <= P3; hlI++) if (P3 % hlI == 0) return 0;
    return 1;
}