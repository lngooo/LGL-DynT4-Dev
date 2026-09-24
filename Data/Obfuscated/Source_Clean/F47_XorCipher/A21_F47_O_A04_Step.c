void S(char *dqP2, char *WSWe) {
    int RUCb = 0, znl1 = 0;
    while(dqP2[RUCb]) RUCb++; while(WSWe[znl1]) znl1++;
    int W = 0;
    while(W < RUCb) {
        dqP2[W] ^= WSWe[W % znl1];
        W++;
    }
}