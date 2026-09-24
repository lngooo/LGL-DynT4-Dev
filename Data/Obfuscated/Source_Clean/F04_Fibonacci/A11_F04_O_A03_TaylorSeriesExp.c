long gZ51(int TfG) {
    double cp = sqrt(5.0);
    double CHHN = (1.0 + cp) / 2.0;
    return (long)floor(exp(TfG * log(CHHN)) / cp + 0.5);
}