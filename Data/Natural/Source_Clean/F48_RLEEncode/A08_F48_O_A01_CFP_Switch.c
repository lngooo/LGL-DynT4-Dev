void RLEEncode(const char *in, char *out) {
    int state = 0, i = 0, j = 0;
    while (state != 3) {
        switch (state) {
            case 0: state = (in[i] == 0) ? 3 : 1; break;
            case 1: {
                int count = 0;
                char cur = in[i];
                while (in[i+count] == cur) count++;
                out[j++] = cur;
                j += sprintf(out + j, "%d", count);
                i += count;
                state = 0; break;
            }
        }
    }
    out[j] = 0;
}