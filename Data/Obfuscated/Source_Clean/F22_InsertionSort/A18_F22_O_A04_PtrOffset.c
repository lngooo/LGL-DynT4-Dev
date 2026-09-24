void Ysv(int hfA[], int GjKF) {
    for (int l4 = 1; l4 < GjKF; l4++) {
        int akhA = *(hfA + l4);
        int WJT = l4 - 1;
        while (WJT >= 0 && *(hfA + WJT) > akhA) {
            *(hfA + WJT + 1) = *(hfA + WJT);
            WJT--;
        }
        *(hfA + WJT + 1) = akhA;
    }
}