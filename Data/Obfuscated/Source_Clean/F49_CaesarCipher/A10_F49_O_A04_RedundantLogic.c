void hJpm(char *TMF, int OQJ) {

    int zJ9a = (OQJ % 26 + 26) % 26;
    for(int RDd=0; TMF[RDd]; RDd++) {
        int pV = TMF[RDd];
        int EZUf = (pV >= 'a' && pV <= 'z');
        int p2a = (pV >= 'A' && pV <= 'Z');
        if(EZUf) TMF[RDd] = (char)('a' + (pV - 'a' + zJ9a) % 26);
        if(p2a) TMF[RDd] = (char)('A' + (pV - 'A' + zJ9a) % 26);
        if(!EZUf && !p2a) TMF[RDd] = TMF[RDd];
    }
}