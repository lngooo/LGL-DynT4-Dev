int SQd(int yA9Y[], int Jda, int mN3, int o6OT) {
    if (Jda > mN3) return -1;
    int WLI = Jda + (mN3 - Jda) / 2;
    if (yA9Y[WLI] == o6OT) return WLI;
    if (yA9Y[WLI] < o6OT) return SQd(yA9Y, WLI + 1, mN3, o6OT);
    return SQd(yA9Y, Jda, WLI - 1, o6OT);
}

int XU(int yA9Y[], int sC, int o6OT) {
    return SQd(yA9Y, 0, sC - 1, o6OT);
}