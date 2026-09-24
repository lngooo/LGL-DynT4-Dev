int D(char* IWD) {
    int bAL = (int)strlen(IWD);
    if (bAL == 0) return 0;
    int E[1024], D64M = 0;
    for(int u1=0; u1<bAL; u1++) E[u1] = (IWD[u1]==' '||IWD[u1]=='\t');
    for(int u1=0; u1<bAL; u1++) if(!E[u1] && (u1==0 || E[u1-1])) D64M++;
    return D64M;
}