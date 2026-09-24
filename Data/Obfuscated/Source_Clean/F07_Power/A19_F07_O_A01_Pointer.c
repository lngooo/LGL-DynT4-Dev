int eH(int N, int exp) {
    int Cw = 1;
    int *OV = &Cw;
    for (int AN = 0; AN < exp; AN++) *OV *= N;
    return Cw;
}