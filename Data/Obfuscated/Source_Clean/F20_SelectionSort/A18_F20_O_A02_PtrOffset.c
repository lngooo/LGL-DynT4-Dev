void O(int bN[], int K) {
    for (int bVUi = 0; bVUi < K; bVUi++) {
        int *OOXw = bN + bVUi;
        int *pP = OOXw + 1;
        int *tm = OOXw;
        while (pP < bN + K) {
            if (*pP < *tm) tm = pP;
            pP++;
        }
        int UX = *OOXw; *OOXw = *tm; *tm = UX;
    }
}