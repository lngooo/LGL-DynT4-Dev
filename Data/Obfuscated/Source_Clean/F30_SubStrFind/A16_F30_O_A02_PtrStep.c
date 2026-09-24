int BY4H(char* ubF, char* CMnx) {
    int Te = strlen(CMnx);
    if (Te == 0) return 0;
    for (char* kYzn = ubF; *kYzn; kYzn = kYzn + 1) {
        int uw = 1;
        for(int rpTs=0; rpTs<Te; rpTs++) if(*(kYzn+rpTs) != *(CMnx+rpTs)) uw = 0;
        if (uw) return (int)(kYzn - ubF);
    }
    return -1;
}