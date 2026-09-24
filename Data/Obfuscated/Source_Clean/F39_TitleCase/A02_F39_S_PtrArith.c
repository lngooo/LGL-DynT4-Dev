void e(char* V) {
    char* K = V;
    int P = 1;
    while (*K) {
        if (*K == ' ' || *K == '\t' || *K == '\n') {
            P = 1;
        } else {
            if (P) {
                if (*K >= 'a' && *K <= 'z') *K -= 32;
                P = 0;
            } else {
                if (*K >= 'A' && *K <= 'Z') *K += 32;
            }
        }
        K++;
    }
}