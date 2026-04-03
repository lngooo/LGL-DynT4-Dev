int VowelCount(const char* s) {
    static int table[256] = {0};
    table['a'] = table['e'] = table['i'] = table['o'] = table['u'] = 1;
    table['A'] = table['E'] = table['I'] = table['O'] = table['U'] = 1;
    int count = 0;
    for (; *s; s++) {
        if (table[(unsigned char)*s]) count++;
    }
    return count;
}