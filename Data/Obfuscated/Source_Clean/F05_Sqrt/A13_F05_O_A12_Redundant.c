int Wjm(int Gccc) {
    int Tv = 0, HDjM = 1;
    int u7 = 100;
    while (Gccc >= HDjM) {
        int kzN = HDjM + 2;
        Gccc = Gccc - HDjM;
        HDjM = kzN;
        Tv++;
        u7 = (u7 % 2 == 0) ? u7 / 2 : u7 * 3 + 1;
    }
    return Tv;
}