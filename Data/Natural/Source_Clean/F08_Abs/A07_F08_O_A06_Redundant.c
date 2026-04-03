int Abs(int n) {
    float f = (float)n;
    double sq = pow((double)f, 2.0);
    return (int)pow(sq, 0.5);
}