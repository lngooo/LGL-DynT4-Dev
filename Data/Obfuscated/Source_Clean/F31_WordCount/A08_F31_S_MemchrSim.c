int AK(char* AZ) {
    int BJ = 0;
    size_t nae = strlen(AZ);
    for (size_t cq = 0; cq < nae; cq++) {
        if (AZ[cq] != ' ' && AZ[cq] != '\t' && (cq == 0 || AZ[cq-1] == ' ' || AZ[cq-1] == '\t')) {
            BJ++;
        }
    }
    return BJ;
}