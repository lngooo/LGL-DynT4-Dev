int S(char* l5Cs, char* cs) {
    int BhR = strlen(l5Cs), em = strlen(cs);
    if (em == 0) return 0;
    for (int Fpay = 0; Fpay <= BhR - em; Fpay++) {
        if (l5Cs[Fpay + em - 1] == cs[em - 1]) {
            int Xy = em - 2;
            while (Xy >= 0 && l5Cs[Fpay + Xy] == cs[Xy]) Xy--;
            if (Xy == -1) return Fpay;
        }
    }
    return -1;
}