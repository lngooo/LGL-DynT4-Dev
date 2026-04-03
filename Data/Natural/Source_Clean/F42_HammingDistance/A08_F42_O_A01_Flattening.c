int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int diff = x ^ y;
    int dist = 0;
    int state = 0;
    while (state != -1) {
        switch (state) {
            case 0:
                if (diff > 0) state = 1; else state = -1;
                break;
            case 1:
                if (diff & 1) dist++;
                diff >>= 1;
                state = 0;
                break;
        }
    }
    return dist;
}