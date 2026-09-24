int q(int m[], int vwiQ, int gs) {
    int FCv = 0, SLj = vwiQ - 1, Zu9, kaup = 0;
    while (kaup != -1) {
        switch (kaup) {
            case 0: kaup = (FCv <= SLj) ? 1 : 5; break;
            case 1: Zu9 = FCv + (SLj - FCv) / 2; kaup = (m[Zu9] == gs) ? 2 : 3; break;
            case 2: return Zu9;
            case 3: kaup = (m[Zu9] < gs) ? 4 : 6; break;
            case 4: FCv = Zu9 + 1; kaup = 0; break;
            case 5: return -1;
            case 6: SLj = Zu9 - 1; kaup = 0; break;
        }
    }
    return -1;
}