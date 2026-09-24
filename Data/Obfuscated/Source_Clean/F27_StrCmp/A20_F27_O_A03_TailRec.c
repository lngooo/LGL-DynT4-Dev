int Pu(const char *I, const char *d) {
    return (*I == '\0' || *I != *d) ? (*(unsigned char*)I - *(unsigned char*)d) : Pu(I+1, d+1);
}

int ymw(const char *I, const char *d) {
    return Pu(I, d);
}