long ZB(int M) {
    if (M == 0) return 0;
    if (M == 1) return 1;
    long blr[2][2] = {{1, 1}, {1, 0}}, vwa[2][2] = {{1, 1}, {1, 0}};
    for (int jK = 1; jK < M - 1; jK++) {
        long ejVO = vwa[0][0]*blr[0][0] + vwa[0][1]*blr[1][0];
        long f = vwa[0][0]*blr[0][1] + vwa[0][1]*blr[1][1];
        long yA = vwa[1][0]*blr[0][0] + vwa[1][1]*blr[1][0];
        long vkxt = vwa[1][0]*blr[0][1] + vwa[1][1]*blr[1][1];
        vwa[0][0]=ejVO; vwa[0][1]=f; vwa[1][0]=yA; vwa[1][1]=vkxt;
    }
    return vwa[0][0];
}