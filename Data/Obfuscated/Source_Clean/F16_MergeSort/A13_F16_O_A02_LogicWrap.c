void fzql(int X3[], int fb2n, int yX) {
    if (fb2n < yX) {
        int sPW9 = (fb2n + yX) / 2;
        fzql(X3, fb2n, sPW9);
        fzql(X3, sPW9 + 1, yX);
        for (int ht = sPW9 + 1; ht <= yX; ht++) {
            int ZBVZ = X3[ht], RMi = ht - 1;
            while (RMi >= fb2n && X3[RMi] > ZBVZ) { X3[RMi + 1] = X3[RMi]; RMi--; }
            X3[RMi + 1] = ZBVZ;
        }
    }
}