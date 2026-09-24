int uD(const char* hB) {
    int M = 0;
    while(*hB) {
        int o9K;
        switch(*hB) {
            case 'a': case 'A': o9K = 10; break;
            case 'b': case 'B': o9K = 11; break;
            case 'c': case 'C': o9K = 12; break;
            case 'd': case 'D': o9K = 13; break;
            case 'e': case 'E': o9K = 14; break;
            case 'f': case 'F': o9K = 15; break;
            default: o9K = *hB - '0'; break;
        }
        M = M * 16 + o9K;
        hB++;
    }
    return M;
}