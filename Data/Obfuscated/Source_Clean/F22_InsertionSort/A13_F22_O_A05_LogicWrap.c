void C(int qX[], int q3F) {
    int oO = 1;
    while (oO < q3F) {
        int j3 = qX[oO], o = oO - 1;
        while (o >= 0) {
            int P = (qX[o] > j3);
            if (P) { qX[o+1] = qX[o]; o--; }
            else break;
        }
        qX[o+1] = j3;
        oO++;
    }
}