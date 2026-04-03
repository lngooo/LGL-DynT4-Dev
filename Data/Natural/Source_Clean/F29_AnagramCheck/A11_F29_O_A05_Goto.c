int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    int xor_s = 0, add_s = 0, i = 0;
loop_start:
    if (!s1[i]) goto loop_end;
    xor_s ^= s1[i]; xor_s ^= s2[i];
    add_s += s1[i]; add_s -= s2[i];
    i++;
    goto loop_start;
loop_end:
    return (xor_s == 0 && add_s == 0);
}