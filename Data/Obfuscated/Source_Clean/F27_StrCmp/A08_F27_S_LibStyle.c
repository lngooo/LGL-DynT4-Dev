int e9S(const char *u3, const char *YI) {
    while(*u3 && *YI && *u3 == *YI) { u3++; YI++; }
    return *(unsigned char*)u3 - *(unsigned char*)YI;
}