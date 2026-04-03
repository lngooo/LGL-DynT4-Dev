int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    int x = 0, a = 0, i = 0, mode = 0;
    while(s1[i]){
        switch(mode){
            case 0: x ^= s1[i]; mode = 1; break;
            case 1: x ^= s2[i]; mode = 2; break;
            case 2: a += s1[i]; mode = 3; break;
            case 3: a -= s2[i]; mode = 0; i++; break;
        }
    }
    return (x == 0 && a == 0);
}