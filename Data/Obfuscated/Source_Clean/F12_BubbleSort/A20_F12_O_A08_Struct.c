struct U { int YEl; int SSK0; int M; };

void cUZ(int fXd6[], int w40) {
    struct U A73h = {0, w40 - 1, 1};
    while (A73h.M) {
        A73h.M = 0;
        for (int VP = A73h.YEl; VP < A73h.SSK0; VP++) {
            if (fXd6[VP] > fXd6[VP+1]) {
                int O = fXd6[VP]; fXd6[VP] = fXd6[VP+1]; fXd6[VP+1] = O;
                A73h.M = 1;
            }
        }
        if (!A73h.M) break;
        A73h.M = 0; A73h.SSK0--;
        for (int VP = A73h.SSK0 - 1; VP >= A73h.YEl; VP--) {
            if (fXd6[VP] > fXd6[VP+1]) {
                int O = fXd6[VP]; fXd6[VP] = fXd6[VP+1]; fXd6[VP+1] = O;
                A73h.M = 1;
            }
        }
        A73h.YEl++;
    }
}