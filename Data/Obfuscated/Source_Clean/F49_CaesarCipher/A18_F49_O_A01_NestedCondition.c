void Yq8A(char *ruMF, int gH) {

    int LS = (gH % 26 + 26) % 26;
    for(int VK1I=0; ruMF[VK1I]; VK1I++) {
        if(ruMF[VK1I] >= 'A') {
            if(ruMF[VK1I] <= 'Z') ruMF[VK1I] = (ruMF[VK1I]-'A'+LS)%26+'A';
            else if(ruMF[VK1I] >= 'a') {
                if(ruMF[VK1I] <= 'z') ruMF[VK1I] = (ruMF[VK1I]-'a'+LS)%26+'a';
            }
        }
    }
}