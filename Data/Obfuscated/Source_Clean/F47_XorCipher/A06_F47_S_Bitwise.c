void k(char *DTI, char *Brd) {
    int OGY = 0; while(Brd[OGY]) OGY++;
    int VHH = 0;
    while(DTI[VHH]) {
        int VI = (unsigned char)DTI[VHH];
        int Xu = (unsigned char)Brd[VHH % OGY];
        DTI[VHH] = (char)(VI ^ Xu);
        VHH++;
    }
}