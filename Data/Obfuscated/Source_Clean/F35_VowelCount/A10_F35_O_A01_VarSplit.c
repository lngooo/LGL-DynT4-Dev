int Mj(const char* O) {
    int Nfd = 0;
    int Va4f = 0;
    for (int Aq = 0; O[Aq]; Aq++) {
        char knTJ = O[Aq];
        if (knTJ == 'a' || knTJ == 'e' || knTJ == 'i' || knTJ == 'o' || knTJ == 'u' ||
            knTJ == 'A' || knTJ == 'E' || knTJ == 'I' || knTJ == 'O' || knTJ == 'U') {
            Nfd++;
        } else {
            Va4f++;
        }
    }
    return Nfd + (Va4f * 0);
}