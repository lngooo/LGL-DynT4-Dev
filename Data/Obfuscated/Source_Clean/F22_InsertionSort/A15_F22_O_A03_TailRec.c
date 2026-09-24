void E8s(int k[], int cs7) {
    if (cs7 <= 1) return;
    int Lb = 1;
M:
    if (Lb < cs7) {
        int Zu = k[Lb], ny1 = Lb - 1;
        while (ny1 >= 0 && k[ny1] > Zu) { k[ny1+1] = k[ny1]; ny1--; }
        k[ny1+1] = Zu;
        Lb++; goto M;
    }
}