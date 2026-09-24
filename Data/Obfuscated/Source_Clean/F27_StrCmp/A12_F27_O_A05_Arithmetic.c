int lb(const char *Uhvf, const char *z) {
    while (!(*Uhvf - *z) && *Uhvf != 0) {
        Uhvf = (char*)((size_t)Uhvf + 1);
        z = (char*)((size_t)z + 1);
    }
    return (int)(*(unsigned char*)Uhvf - *(unsigned char*)z);
}