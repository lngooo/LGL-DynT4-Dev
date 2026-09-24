void gOSw(int f4OC[], int ic) {
    int bU = 0, Fy = 0;
    int Y = ic - 1, FI9 = 0;
    while ((bU + Fy) < (Y + FI9)) {
        int bcvd = bU + Fy;
        int YUc = Y + FI9;
        int hnZP = f4OC[bcvd];
        f4OC[bcvd] = f4OC[YUc];
        f4OC[YUc] = hnZP;
        Fy++;
        FI9--;
    }
}