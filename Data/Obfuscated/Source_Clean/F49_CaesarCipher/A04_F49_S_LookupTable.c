void X8(char *WxKD, int o2h) {

    char zc[26], N[26];
    int ci39 = (o2h % 26 + 26) % 26;
    for(int w608=0; w608<26; w608++) {
        zc[w608] = 'a' + (w608 + ci39) % 26;
        N[w608] = 'A' + (w608 + ci39) % 26;
    }
    while(*WxKD) {
        if(*WxKD >= 'a' && *WxKD <= 'z') *WxKD = zc[*WxKD - 'a'];
        else if(*WxKD >= 'A' && *WxKD <= 'Z') *WxKD = N[*WxKD - 'A'];
        WxKD++;
    }
}