void CRso(int Vk[], int HZYm) {
    for (int L = 1; L < HZYm; L++) {
        int O = Vk[L];
        int Z = L - 1;
        while (Z >= 0 && Vk[Z] > O) {
            Vk[Z + 1] = Vk[Z];
            Z = Z - 1;
        }
        Vk[Z + 1] = O;
    }
}