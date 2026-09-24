double a(int ZAz9[], int w) {
    double t1e = 0; int PtoS = 0;
P:
    if (PtoS < w) { t1e += ZAz9[PtoS++]; goto P; }
    return t1e / w;
}