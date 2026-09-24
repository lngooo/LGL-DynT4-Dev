#define MATCH(x, y) (*(x) == *(y))
#define EXISTS(x) (*(x) != '\0')

int Fm(const char *cwd6, const char *Z16Q) {
    while (EXISTS(cwd6) && MATCH(cwd6, Z16Q)) {
        cwd6++; Z16Q++;
    }
    return *(unsigned char *)cwd6 - *(unsigned char *)Z16Q;
}