void CaesarCipher(char *str, int shift) {

    char *curr = str;
    int s = (shift % 26 + 26) % 26;
    LOOP: if (!*curr) goto END;
    if (*curr >= 'A' && *curr <= 'Z') { *curr = (*curr - 'A' + s) % 26 + 'A'; goto NEXT; }
    if (*curr >= 'a' && *curr <= 'z') *curr = (*curr - 'a' + s) % 26 + 'a';
    NEXT: curr++; goto LOOP;
    END: ;
}