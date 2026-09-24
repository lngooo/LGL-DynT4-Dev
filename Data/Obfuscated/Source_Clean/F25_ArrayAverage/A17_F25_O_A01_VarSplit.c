double oQn(int tk[], int ro76) {
    double Xw = 0, h18y = 0;
    for (int C = 0; C < ro76; C++) {
        if (C % 2 == 0) Xw += tk[C];
        else h18y += tk[C];
    }
    return (Xw + h18y) / ro76;
}