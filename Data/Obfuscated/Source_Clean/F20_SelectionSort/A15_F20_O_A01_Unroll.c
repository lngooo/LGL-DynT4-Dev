void f(int N[], int gFVW) {
    for (int O = 0; O < gFVW - 1; O++) {
        int GLZc = O, Ano = O + 1;
        for (; Ano < gFVW - 1; Ano += 2) {
            if (N[Ano] < N[GLZc]) GLZc = Ano;
            if (N[Ano+1] < N[GLZc]) GLZc = Ano + 1;
        }
        for (; Ano < gFVW; Ano++) if (N[Ano] < N[GLZc]) GLZc = Ano;
        int Jyhm = N[O]; N[O] = N[GLZc]; N[GLZc] = Jyhm;
    }
}