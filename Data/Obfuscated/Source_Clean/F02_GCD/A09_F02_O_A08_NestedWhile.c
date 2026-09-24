int X(int olZ9, int dJp6) {
    olZ9 = abs(olZ9); dJp6 = abs(dJp6);
    while (olZ9 != dJp6) {
        while (olZ9 > dJp6) olZ9 -= dJp6;
        while (dJp6 > olZ9) dJp6 -= olZ9;
        if (olZ9 == 0 || dJp6 == 0) break;
    }
    return (olZ9 == 0) ? dJp6 : olZ9;
}