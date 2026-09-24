int ffz5(int s9[], int g, int rh) {
    if (g == rh) return s9[g];
    int Fj = g + (rh-g)/2;
    int H8 = ffz5(s9, g, Fj), s = ffz5(s9, Fj+1, rh);
    return (H8 > s) ? H8 : s;
}

int RI7i(int wACV[], int eb) { return (eb > 0) ? ffz5(wACV, 0, eb-1) : 0; }