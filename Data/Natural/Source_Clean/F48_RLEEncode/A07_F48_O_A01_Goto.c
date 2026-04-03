void RLEEncode(const char *in, char *out) {
    int i = 0, j = 0;
start_loop:
    if (!in[i]) goto end;
    int c = 1;
check_next:
    if (in[i+c] && in[i+c] == in[i]) { c++; goto check_next; }
    out[j++] = in[i];
    j += sprintf(out + j, "%d", c);
    i += c;
    goto start_loop;
end:
    out[j] = 0;
}