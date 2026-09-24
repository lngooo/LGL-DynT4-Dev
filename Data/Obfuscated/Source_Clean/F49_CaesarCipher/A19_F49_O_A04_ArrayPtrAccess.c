void cLVN(char *ua3, int MSZ) {

    int j0 = (MSZ % 26 + 26) % 26;
    char X3Bs[] = "abcdefghijklmnopqrstuvwxyz";
    char ii[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int Lq=0; ua3[Lq]; Lq++) {
        for(int gigk=0; gigk<26; gigk++) {
            if(ua3[Lq] == X3Bs[gigk]) { ua3[Lq] = X3Bs[(gigk+j0)%26]; break; }
            if(ua3[Lq] == ii[gigk]) { ua3[Lq] = ii[(gigk+j0)%26]; break; }
        }
    }
}