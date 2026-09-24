int B(int s) {
    if (s < 0) return -1;
    if (s < 2) return s;
    long mgbn = 1;
    for(; (mgbn << 2) <= s; mgbn <<= 1);
    long Os = (mgbn | (s / mgbn)) >> 1; 

    Os = (mgbn + s / mgbn) >> 1;
    while (Os < mgbn) {
        mgbn = Os;
        Os = (mgbn + s / mgbn) >> 1;
    }
    return (int)mgbn;
}