void F47p(char **yT, int HP, char *z) {
    if (HP <= 0) return;
    if ((HP * HP + 1) > 0) {
        if (HP == 1) { strcpy(z, yT[0]); return; }
        char pjR[128]={0}, j[128]={0};
        F47p(yT, HP/2, pjR); F47p(yT+HP/2, HP-HP/2, j);
        int NRsU=0; while(pjR[NRsU] && j[NRsU] && pjR[NRsU]==j[NRsU]) { z[NRsU]=pjR[NRsU]; NRsU++; }
        z[NRsU]='\0';
    }
}