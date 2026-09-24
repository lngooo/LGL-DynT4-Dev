int G2(int F3ke) {
    int upvr = 0, G = 0;
    if (F3ke >= 65536) { F3ke >>= 16; upvr = 16; }
    if (F3ke >= 256) { F3ke >>= 8; G = 8; }
    int JP = 0;
    if (F3ke >= 16) { F3ke >>= 4; JP = 4; }
    int z0pf = 0;
    while(F3ke >>= 1) z0pf++;
    return upvr + G + JP + z0pf;
}