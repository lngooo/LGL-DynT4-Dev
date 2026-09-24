void M8RN(char* V) {
    int jOpU = 1;
    for (int TfQ = 0; V[TfQ]; TfQ++) {
        if (V[TfQ] == ' ') { jOpU = 1; continue; }
        if (jOpU) {
            if (V[TfQ] >= 'a') V[TfQ] = V[TfQ] ^ 32;
            jOpU = 0;
        } else {
            if (V[TfQ] >= 'A' && V[TfQ] <= 'Z') V[TfQ] = V[TfQ] ^ 32;
        }
    }
}