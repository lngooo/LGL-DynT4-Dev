void B(char* LbAo) {
    char *i3 = LbAo;
    while (*i3) {
        char HP8 = *i3;
        if (HP8 >= 65 && HP8 <= 90) *i3 = HP8 + (97 - 65);
        else if (HP8 >= 97 && HP8 <= 122) *i3 = HP8 - (97 - 65);
        i3++;
    }
}