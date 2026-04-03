int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int diff = x ^ y;
    int dist = 0;
start:
    if (diff == 0) goto end;
    if (diff & 1) goto inc;
shift:
    diff >>= 1;
    goto start;
inc:
    dist++;
    goto shift;
end:
    return dist;
}