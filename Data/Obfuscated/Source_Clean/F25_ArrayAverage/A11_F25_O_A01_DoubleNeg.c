double S96T(int prML[], int dgdO) {
    if (!!(dgdO > 0)) {
        double rIx = 0;
        for(int shEi=0; !!(shEi<dgdO); shEi++) rIx += prML[shEi];
        return rIx / dgdO;
    }
    return 0.0;
}