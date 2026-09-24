void XMQ(char* F) {
    char *IQ = F, *Xh2 = F;
    while (*IQ) {
        Xh2 = IQ;
        while (*Xh2 == *IQ) Xh2++;
        printf("%c%ld", *IQ, (long)(Xh2 - IQ));
        IQ = Xh2;
    }
    printf("\n");
}