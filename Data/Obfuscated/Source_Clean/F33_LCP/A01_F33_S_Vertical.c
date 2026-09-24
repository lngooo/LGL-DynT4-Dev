void S(char **g, int oA, char *AIVe) {
    if (oA <= 0) return;
    int R = 0;
    while (g[0][R]) {
        char TioV = g[0][R];
        for (int nx = 1; nx < oA; nx++) {
            if (g[nx][R] != TioV) { AIVe[R] = '\0'; return; }
        }
        AIVe[R] = TioV;
        R++;
    }
    AIVe[R] = '\0';
}