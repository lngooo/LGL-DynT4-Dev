void NUN(unsigned char *gSM, int VM, char *iD) {
    const char *WF = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int I3 = 0;
    while (I3 < VM) {
        unsigned int y = (gSM[I3] << 16) | (I3+1<VM ? gSM[I3+1] << 8 : 0) | (I3+2<VM ? gSM[I3+2] : 0);
        for(int wP=0; wP<4; wP++) {
            if (wP == 0) iD[(I3/3)*4+wP] = WF[(y >> 18) & 0x3F];
            else if (wP == 1) iD[(I3/3)*4+wP] = WF[(y >> 12) & 0x3F];
            else if (wP == 2) iD[(I3/3)*4+wP] = (I3+1 < VM) ? WF[(y >> 6) & 0x3F] : '=';
            else iD[(I3/3)*4+wP] = (I3+2 < VM) ? WF[y & 0x3F] : '=';
        }
        I3 += 3;
    }
    iD[((VM+2)/3)*4] = 0;
}