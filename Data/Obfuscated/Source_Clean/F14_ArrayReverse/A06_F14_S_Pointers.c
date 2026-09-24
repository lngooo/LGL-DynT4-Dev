void Zlq(int Fl[], int v) {
    int *j = Fl;
    int *FW = Fl + v - 1;
    while (j < FW) {
        int XypQ = *j;
        *j = *FW;
        *FW = XypQ;
        j++; FW--;
    }
}