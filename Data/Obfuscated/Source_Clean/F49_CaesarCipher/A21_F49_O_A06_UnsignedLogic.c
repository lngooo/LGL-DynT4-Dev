void Ftl(char *vz, int VGSF) {

    int G = (VGSF % 26 + 26) % 26;
    for(int in=0; vz[in]; in++) {
        unsigned char HPIP = (unsigned char)vz[in];
        if(HPIP >= 97 && HPIP <= 122) vz[in] = (char)('a' + (HPIP - 97 + G) % 26);
        else if(HPIP >= 65 && HPIP <= 90) vz[in] = (char)('A' + (HPIP - 65 + G) % 26);
    }
}