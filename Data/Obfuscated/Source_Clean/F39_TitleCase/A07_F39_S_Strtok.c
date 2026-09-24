void G(char* nIxv) {
    char U[1024];
    strcpy(U, nIxv);
    char* KVD = strtok(U, " ");
    nIxv[0] = '\0';
    while (KVD) {
        KVD[0] = toupper(KVD[0]);
        for(int kTSg=1; KVD[kTSg]; kTSg++) KVD[kTSg] = tolower(KVD[kTSg]);
        strcat(nIxv, KVD);
        KVD = strtok(NULL, " ");
        if (KVD) strcat(nIxv, " ");
    }
}