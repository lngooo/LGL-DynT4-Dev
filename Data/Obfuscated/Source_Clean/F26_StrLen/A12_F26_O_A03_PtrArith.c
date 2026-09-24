int OO(const char *WT) {
    const char *I8 = WT;
    for (; *I8; I8++);
    return (int)(size_t)(I8 - WT);
}