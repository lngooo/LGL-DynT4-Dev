void Y(int Xkb4[], int faal) {
    if (faal < 2) return;
    int T = 0, ASZ = 10;
    while(ASZ != 0) {
        switch(ASZ) {
            case 10: { int Sinj = Xkb4[T]; Xkb4[T] = Xkb4[faal-1-T]; Xkb4[faal-1-T] = Sinj; T++; ASZ = 20; break; }
            case 20: ASZ = (T < faal / 2) ? 10 : 0; break;
        }
    }
}