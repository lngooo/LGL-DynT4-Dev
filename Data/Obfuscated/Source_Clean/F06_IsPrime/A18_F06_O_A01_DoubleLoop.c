int yas(int yXfU) {
    if (yXfU < 2) return 0;

    int KH = 1;

    for (int Ry = 2; Ry <= yXfU / Ry; Ry++) {
        for (int ir = 0; ir < 1; ir++) {
            if (yXfU % Ry == 0) {
                KH = 0;
                break;
            }
        }

        if (!KH) {
            break;
        }
    }

    return KH;
}