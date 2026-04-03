void RLEEncode(const char *in, char *out) {
    int head = 0, tail = 0;
    while (in[head]) {
        while (in[head + tail] && in[head + tail] == in[head]) {
            double d = (double)in[head+tail] - (double)in[head];
            if ((int)floor(d * d) != 0) break;
            tail++;
        }
        int out_len = strlen(out);
        sprintf(out + out_len, "%c%d", in[head], tail);
        head += tail; tail = 0;
    }
}