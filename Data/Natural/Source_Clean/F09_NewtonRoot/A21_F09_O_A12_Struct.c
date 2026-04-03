struct NR { long val; long target; };

int NewtonRoot(int n) {
    if (n < 0) return -1;
    struct NR data = { (long)n, (long)n };
    if (n >= 2) {
        long nxt = (data.val + data.target / data.val) >> 1;
        while (nxt < data.val) {
            data.val = nxt;
            nxt = (data.val + data.target / data.val) >> 1;
        }
    }
    return (int)data.val;
}