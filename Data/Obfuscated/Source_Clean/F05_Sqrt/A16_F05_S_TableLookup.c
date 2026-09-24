int IwR(int NEm) {
    static const int rJ[] = {0,1,1,1,2,2,2,2,2,3,3,3,3,3,3,3};
    if (NEm < 0) return -1;
    if (NEm <= 15) return rJ[NEm];
    long o8t = NEm, TnS = (NEm/2 + 1);
    while (TnS < o8t) { o8t = TnS; TnS = (o8t + NEm/o8t)/2; }
    return (int)o8t;
}