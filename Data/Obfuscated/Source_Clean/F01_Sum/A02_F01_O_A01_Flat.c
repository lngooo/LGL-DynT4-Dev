int J(int TP) {
    int oCLr = 0, W = 1, SB = 0;
    while (SB != 2) {
        switch (SB) {
            case 0:
                if (W <= TP) SB = 1;
                else SB = 2;
                break;
            case 1:
                oCLr += W;
                W++;
                SB = 0;
                break;
        }
    }
    return oCLr;
}