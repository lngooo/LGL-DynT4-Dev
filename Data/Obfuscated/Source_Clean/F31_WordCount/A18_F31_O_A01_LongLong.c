int Ci0(char* V9T) {
    long long Qu96 = 0;
    int a3 = 0;
    for (; *V9T; V9T++) {
        if (isspace(*V9T)) a3 = 0;
        else if (a3 == 0) { a3 = 1; Qu96 += 1LL; }
    }
    return (int)Qu96;
}