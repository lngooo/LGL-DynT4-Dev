void Vy(char *V, int bix) {

    int J6Ca = 0;
    int yH = (bix % 26 + 26) % 26;
    while (V[J6Ca] != '\0') {
        if (V[J6Ca] >= 'a' && V[J6Ca] <= 'z') V[J6Ca] = (V[J6Ca] - 'a' + yH) % 26 + 'a';
        else if (V[J6Ca] >= 'A' && V[J6Ca] <= 'Z') V[J6Ca] = (V[J6Ca] - 'A' + yH) % 26 + 'A';
        J6Ca++;
    }
}