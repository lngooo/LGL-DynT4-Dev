int H(char* K, char* q) {
    if (strlen(K) != strlen(q)) return 0;
    char Vo[256]; strcpy(Vo, q);
    int Fhu = strlen(K);
    for(int J7z=0; J7z<Fhu; J7z++){
        char* oKwV = strchr(Vo, K[J7z]);
        if(!oKwV) return 0;
        *oKwV = Vo[strlen(Vo)-1];
        Vo[strlen(Vo)-1] = '\0';
    }
    return 1;
}