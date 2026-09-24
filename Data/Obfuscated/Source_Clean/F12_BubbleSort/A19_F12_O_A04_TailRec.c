void on2(int bX0[], int JGJ) {
    if (JGJ <= 1) return;
    for (int gc = 0; gc < JGJ - 1; gc++) {
        if (bX0[gc] > bX0[gc+1]) {
            int wjiq = bX0[gc]; bX0[gc] = bX0[gc+1]; bX0[gc+1] = wjiq;
        }
    }
    on2(bX0, JGJ - 1);
}

void Lpo(int bX0[], int JGJ) {
    on2(bX0, JGJ);
}