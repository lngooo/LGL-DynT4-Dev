void J7v(char *qb, int S) {

    char *l = qb;
    int BVS6 = (S % 26 + 26) % 26;
    while(1) {
        if(*l == 0) break;
        if(*l >= 'A' && *l <= 'Z') *l = (*l - 'A' + BVS6) % 26 + 'A';
        else if(*l >= 'a' && *l <= 'z') *l = (*l - 'a' + BVS6) % 26 + 'a';
        l++;
    }
}