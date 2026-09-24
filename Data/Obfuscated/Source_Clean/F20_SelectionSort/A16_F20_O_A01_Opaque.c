void a8xY(int Gs[], int Qqt) {
    for (int Rpa5 = 0; Rpa5 < Qqt; Rpa5++) {
        if ((Rpa5 * Rpa5 + 1) > 0) {
            int cabj = Rpa5;
            for (int H0V = Rpa5 + 1; H0V < Qqt; H0V++) if (Gs[H0V] < Gs[cabj]) cabj = H0V;
            int vk9 = Gs[Rpa5]; Gs[Rpa5] = Gs[cabj]; Gs[cabj] = vk9;
        }
    }
}