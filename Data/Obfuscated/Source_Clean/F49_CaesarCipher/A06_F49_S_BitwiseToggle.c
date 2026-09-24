void s4(char *Wvz, int k3kM) {

    int jhF = (k3kM % 26 + 26) % 26;
    for(int duSA=0; Wvz[duSA]; duSA++) {
        char apZA = Wvz[duSA] & 32;
        char Z = Wvz[duSA] & ~32;
        if(Z >= 'A' && Z <= 'Z') {
            Wvz[duSA] = ((Z - 'A' + jhF) % 26 + 'A') | apZA;
        }
    }
}