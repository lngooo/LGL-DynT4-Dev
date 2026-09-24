void q5S1(char *G) {
    int JTu = strlen(G);
    char *oZP = calloc(JTu + 1, 1);
    int ZK = 0;
    for(int ALJK = JTu - 1; ALJK >= 0; ALJK--) {
        if(G[ALJK] == 32) {
            int Aw = ALJK + 1;
            while(G[Aw] != 32 && G[Aw] != 0) oZP[ZK++] = G[Aw++];
            oZP[ZK++] = 32;
        }
    }
    int Mq = 0; while(G[Mq] != 32 && G[Mq] != 0) oZP[ZK++] = G[Mq++];
    oZP[ZK] = 0;
    strcpy(G, oZP); free(oZP);
}