void Qs(char *Fk) {
    int m = strlen(Fk);
    for(int Rk0e=0; Rk0e<m/2; Rk0e++) { char wTaP=Fk[Rk0e]; Fk[Rk0e]=Fk[m-1-Rk0e]; Fk[m-1-Rk0e]=wTaP; }
    int Z = 0;
    for(int Rk0e=0; Rk0e<=m; Rk0e++) {
        if(Fk[Rk0e] == ' ' || Fk[Rk0e] == '\0') {
            for(int M=0; M<(Rk0e-Z)/2; M++) { char wTaP=Fk[Z+M]; Fk[Z+M]=Fk[Rk0e-1-M]; Fk[Rk0e-1-M]=wTaP; }
            Z = Rk0e + 1;
        }
    }
}