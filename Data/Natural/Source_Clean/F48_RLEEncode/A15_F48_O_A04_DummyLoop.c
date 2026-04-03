void RLEEncode(const char *in, char *out) {
    int i = 0, k = 0;
    while (in[i]) {
        int c = 0;
        char target = in[i];
        for(int d=0; d<1; d++) {
            while(in[i+c] == target) c++;
        }
        k += sprintf(out + k, "%c%d", target, c);
        i += c;
    }
}