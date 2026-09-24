void WIG(int DX[], int rd) {
    int hY = 0, R2 = rd - 1;
    while(1) {
        if(!(hY < R2)) break;
        int FlkQ = DX[hY]; DX[hY] = DX[R2]; DX[R2] = FlkQ;
        hY++; R2--;
    }
}