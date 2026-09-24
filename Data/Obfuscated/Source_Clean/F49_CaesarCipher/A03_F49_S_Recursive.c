void k(char *Z, int Ob) {

    if (*Z == '\0') return;
    int xi = (Ob % 26 + 26) % 26;
    if (*Z >= 'A' && *Z <= 'Z') *Z = (*Z - 'A' + xi) % 26 + 'A';
    else if (*Z >= 'a' && *Z <= 'z') *Z = (*Z - 'a' + xi) % 26 + 'a';
    k(Z + 1, Ob);
}