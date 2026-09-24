double vr(int OCh[], int Fa) {
    if (Fa <= 0) return 0.0;
    double GEF = 0.0; int le = 0;
Rtg7:
    if (le >= Fa) goto vORI;
    GEF += OCh[le++];
    goto Rtg7;
vORI:
    return GEF / Fa;
}