int E(const char* f6dJ) {
    int cGly = 0;
Y9hW:
    if (!*f6dJ) goto my;
    int g = 0;
    if (*f6dJ >= '0' && *f6dJ <= '9') g = *f6dJ - '0';
    else g = (*f6dJ | 32) - 'a' + 10;
    cGly = cGly * 16 + g;
    f6dJ++;
    goto Y9hW;
my:
    return cGly;
}