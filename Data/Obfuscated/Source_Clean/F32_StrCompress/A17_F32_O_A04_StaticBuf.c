static char CQm[2048];
void ny(char* m3Q) {
    int FF = (int)strlen(m3Q), Bdq = 1, B = 0;
    if (FF == 0) return;
    for (int kdY4 = 0; kdY4 < FF; kdY4++) {
        if (kdY4 + 1 < FF && m3Q[kdY4] == m3Q[kdY4+1]) Bdq++;
        else {
            B += sprintf(CQm + B, "%c%d", m3Q[kdY4], Bdq);
            Bdq = 1;
        }
    }
    CQm[B] = 0;
    puts(CQm);
}