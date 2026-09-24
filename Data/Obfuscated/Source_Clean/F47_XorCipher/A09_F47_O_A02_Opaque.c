void Bml(char *E, char *Pcb) {
    int Ne = 0; while(Pcb[Ne]) Ne++;
    if (*E != '\0') {
        if ((Ne * Ne + 7) > 0) {
            static int V = 0;
            *E ^= Pcb[V % Ne];
            V++;
            Bml(E + 1, Pcb);
            if (*(E-1) == 0) V = 0; 
        }
    }
}