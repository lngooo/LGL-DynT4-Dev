int fsO(char* V, char dDA) {
    int OH = 0;
    for (; *V; V++) {
        if (!(*V ^ dDA)) OH++;
    }
    return OH;
}