int Ly(int g[], int OV) {
    int *c = g;
    for (int mT = 0; mT < OV; mT++) {
        int ge8I = 1;
        for (int tUE = 0; tUE < (int)(c - g); tUE++) {
            if (*(g + tUE) == *(g + mT)) ge8I = 0;
        }
        if (ge8I) { *c = *(g + mT); c++; }
    }
    return (int)(c - g);
}