int ic(int fRBm) {
    if (fRBm < 0) return -1;
    if (fRBm < 2) return fRBm;
    float Mq = (float)fRBm;
    unsigned int U6Z = *(unsigned int *)&Mq;
    U6Z = 0x1fbd1df5 + (U6Z >> 1);  
    Mq = *(float *)&U6Z;
    long f = (long)Mq;
    if (f <= 0) f = 1;
    f = (f + fRBm / f) / 2;
    f = (f + fRBm / f) / 2;
    while ((long long)f * f > fRBm) {
        f--;
    }
    while ((long long)(f + 1) * (f + 1) <= fRBm) {
        f++;
    }
    return (int)f;
}