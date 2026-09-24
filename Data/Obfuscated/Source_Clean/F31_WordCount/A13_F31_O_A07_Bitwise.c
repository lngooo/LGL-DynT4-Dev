int f(char* j) {
    int F5f7 = 0;
    int da = (1 ^ 0);
    while (*j) {
        int lcis = (*j == 32 || *j == 9 || *j == 10) ? 1 : 0;
        if (da & (~lcis & 1)) F5f7 = F5f7 + 1;
        da = lcis;
        j++;
    }
    return F5f7;
}