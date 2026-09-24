long long uOT4(int IcNe) {
    if (IcNe < 0) return 0;
    if (IcNe == 0) return 1;
    long long OR = 1, oVf = 1;
    int gWOT = IcNe / 2;
    for (int C = 1; C <= gWOT; C++) OR *= C;
    for (int C = gWOT + 1; C <= IcNe; C++) oVf *= C;
    return OR * oVf;
}