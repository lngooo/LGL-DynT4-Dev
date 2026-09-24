void n1(char *LC) {
    char *Hp = LC; while(*Hp) Hp++;
    char *KY = LC, *j = Hp - 1;
    while(KY < j) { char P = *KY; *KY++ = *j; *j-- = P; }
    char *bz60 = LC;
    for(char *Kn = LC; Kn <= Hp; Kn++) {
        if(*Kn == ' ' || *Kn == '\0') {
            char *H3 = bz60, *T = Kn - 1;
            while(H3 < T) { char P = *H3; *H3++ = *T; *T-- = P; }
            bz60 = Kn + 1;
        }
    }
}