void GvQk(int w5uJ[], int xAW) {
    int *UuMp = (int*)malloc(xAW * sizeof(int));
    memcpy(UuMp, w5uJ, xAW * sizeof(int));
    for (int yX = 0; yX < xAW - 1; yX++) {
        for (int x9C = 0; x9C < xAW - yX - 1; x9C++) {
            if (UuMp[x9C] > UuMp[x9C+1]) {
                int zaUc = UuMp[x9C]; UuMp[x9C] = UuMp[x9C+1]; UuMp[x9C+1] = zaUc;
            }
        }
    }
    memcpy(w5uJ, UuMp, xAW * sizeof(int));
    free(UuMp);
}