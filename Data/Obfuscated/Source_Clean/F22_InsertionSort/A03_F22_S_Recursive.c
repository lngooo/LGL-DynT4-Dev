void se(int H7[], int zNd) {
    if (zNd <= 1) return;
    se(H7, zNd - 1);
    int L = H7[zNd - 1];
    int qPbc = zNd - 2;
    while (qPbc >= 0 && H7[qPbc] > L) {
        H7[qPbc + 1] = H7[qPbc];
        qPbc--;
    }
    H7[qPbc + 1] = L;
}