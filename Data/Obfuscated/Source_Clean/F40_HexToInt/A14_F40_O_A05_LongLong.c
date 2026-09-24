int r(const char* RYFr) {
    int p = (int)strlen(RYFr);
    long long F = 0;
    long long o2J = 1;
    for(int XhP = p - 1; XhP >= 0; XhP--) {
        int ja4 = (RYFr[XhP] >= 'a') ? (RYFr[XhP]-'a'+10) : ((RYFr[XhP]>='A')?(RYFr[XhP]-'A'+10):(RYFr[XhP]-'0'));
        F += (long long)ja4 * o2J;
        o2J *= 16;
    }
    return (int)F;
}