int r(char *QfvJ) {
    if (!QfvJ[0] || !QfvJ[1]) return 1;
    int i = 0; while (QfvJ[i]) i++;
    int V = (QfvJ[0] == QfvJ[i-1]);
    if (!V) return 0;
    QfvJ[i-1] = '\0';
    return r(QfvJ + 1);
}