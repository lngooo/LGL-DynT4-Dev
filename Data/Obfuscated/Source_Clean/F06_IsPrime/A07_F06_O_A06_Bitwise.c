int QH(int At) {
    if (At < 2) return 0;
    long long dJ8 = 1;
    for (int OR = 1; OR < At; OR++) {
        long long JFdw = 0;
        for(int YHuS=0; YHuS<OR; YHuS++) JFdw = (JFdw + dJ8) % At;
        dJ8 = JFdw;
    }
    return (dJ8 == (long long)At - 1);
}