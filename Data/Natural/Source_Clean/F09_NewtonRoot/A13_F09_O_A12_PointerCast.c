int NewtonRoot(int n) {
    if (n < 0) return -1;
    float f = (float)n;
    unsigned int *p = (unsigned int *)&f;
    *p = 0x1fbd1df5 + (*p >> 1);
    long val = (long)f;
    if (val <= 0) val = 1;
    for(int i=0; i<3; i++) val = (val + n/val) >> 1;
    return (int)val;
}