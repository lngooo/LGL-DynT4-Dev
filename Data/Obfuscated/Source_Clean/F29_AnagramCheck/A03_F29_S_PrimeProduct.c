int z(char* jrvm, char* F) {
    int kt19[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
    if (strlen(jrvm) != strlen(F)) return 0;
    long long omF = 1, BB82 = 1;
    for (int FQ = 0; jrvm[FQ]; FQ++) {
        omF *= kt19[jrvm[FQ] % 26];
        BB82 *= kt19[F[FQ] % 26];
    }
    return (int)(omF == BB82);
}