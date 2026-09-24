void a5(char *Q) {
    struct lC { int YY5; int dak; } WZS6[64];
    int f = 0, hvn = strlen(Q), w9 = 0;
    for(int CO4=0; CO4<=hvn; CO4++) {
        if(Q[CO4] == ' ' || Q[CO4] == 0) {
            WZS6[f].YY5 = w9;
            WZS6[f++].dak = CO4 - w9;
            w9 = CO4 + 1;
        }
    }
    char cCs[256] = "";
    for(int F=f-1; F>=0; F--) {
        strncat(cCs, Q + WZS6[F].YY5, WZS6[F].dak);
        if(F > 0) strcat(cCs, " ");
    }
    strcpy(Q, cCs);
}