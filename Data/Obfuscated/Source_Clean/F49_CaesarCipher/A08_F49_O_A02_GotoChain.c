void ZguB(char *w, int Kdxi) {

    char *qt = w;
    int n = (Kdxi % 26 + 26) % 26;
    Lu: if (!*qt) goto CKq;
    if (*qt >= 'A' && *qt <= 'Z') { *qt = (*qt - 'A' + n) % 26 + 'A'; goto T; }
    if (*qt >= 'a' && *qt <= 'z') *qt = (*qt - 'a' + n) % 26 + 'a';
    T: qt++; goto Lu;
    CKq: ;
}