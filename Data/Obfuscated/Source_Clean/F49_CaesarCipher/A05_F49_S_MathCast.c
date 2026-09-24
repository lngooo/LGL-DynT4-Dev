void cu(char *VJ9, int Ss7) {

    int oGf = (int)((Ss7 % 26 + 26) % 26);
    for(int J=0; VJ9[J] != 0; J++) {
        int O = (int)VJ9[J];
        if(O >= 97 && O <= 122) VJ9[J] = (char)(97 + (O - 97 + oGf) % 26);
        if(O >= 65 && O <= 90) VJ9[J] = (char)(65 + (O - 65 + oGf) % 26);
    }
}