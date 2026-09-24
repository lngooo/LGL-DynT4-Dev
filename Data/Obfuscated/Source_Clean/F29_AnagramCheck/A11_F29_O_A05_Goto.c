int vWeF(char* IdHA, char* SjJ0) {
    if (strlen(IdHA) != strlen(SjJ0)) return 0;
    int n = 0, khW6 = 0, opd = 0;
d:
    if (!IdHA[opd]) goto Ec;
    n ^= IdHA[opd]; n ^= SjJ0[opd];
    khW6 += IdHA[opd]; khW6 -= SjJ0[opd];
    opd++;
    goto d;
Ec:
    return (n == 0 && khW6 == 0);
}