void B(char* o) {
    int nAup = 0;
    for (int TPig = 0; o[TPig]; TPig++) {
        unsigned char uxM = o[TPig];
        int y = !(uxM ^ 32);
        int adbM = !(uxM ^ 9);
        int Zit = !(uxM ^ 10);
        if (!(y | adbM | Zit)) {
            o[nAup] = o[TPig];
            nAup = -~nAup; 
        }
    }
    o[nAup] = 0;
}