void RLEEncode(const char *in, char *out) {
    int write = 0;
    for (int i = 0, next = 0; in[i]; i = next) {
        while (in[next] && in[next] == in[i]) next++;
        out[write++] = in[i];
        char num[12];
        sprintf(num, "%d", next - i);
        for(int k=0; num[k]; k++) out[write++] = num[k];
    }
    out[write] = '\0';
}