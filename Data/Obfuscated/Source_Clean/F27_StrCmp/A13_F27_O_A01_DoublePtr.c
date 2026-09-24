int t(const char *lTB, const char *Ffl) {
    const char **zmo = &lTB;
    const char **POf = &Ffl;
    while (**zmo && (**zmo == **POf)) {
        (*zmo)++; (*POf)++;
    }
    return (unsigned char)**zmo - (unsigned char)**POf;
}