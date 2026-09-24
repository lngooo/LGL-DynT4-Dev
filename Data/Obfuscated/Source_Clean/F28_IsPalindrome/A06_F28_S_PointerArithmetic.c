int o(char *Om) {
    char *QUC = Om;
    while (*QUC) QUC++;
    QUC--;
    while (Om < QUC) {
        if (*Om != *QUC) return 0;
        Om++; QUC--;
    }
    return 1;
}