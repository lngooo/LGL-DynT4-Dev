int ONh(const char* h) {
    int MEkd = 0;
    const char* H1 = "aeiouAEIOU";
    while (*h) {
        if (strchr(H1, *h)) MEkd++;
        h++;
    }
    return MEkd;
}