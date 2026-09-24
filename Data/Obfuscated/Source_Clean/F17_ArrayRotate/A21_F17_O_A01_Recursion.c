void AxZF(int ryb[], int Co, int Pew) {
    if(Co >= Pew) return;
    int Y = ryb[Co]; ryb[Co] = ryb[Pew]; ryb[Pew] = Y;
    AxZF(ryb, Co+1, Pew-1);
}

void ogh(int x[], int I, int vm) {
    if (I == 0) return;
    vm %= I;
    AxZF(x, 0, vm-1);
    AxZF(x, vm, I-1);
    AxZF(x, 0, I-1);
}