unsigned int K9(unsigned int urBl) {
    if (urBl == 0) return 0;
    return urBl ^ (urBl >> 1);
}