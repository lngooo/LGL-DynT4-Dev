void K(char *aNl) {
    int Zg0Q = strlen(aNl); char u[256]; memset(u, 0, 256);
    int Bf = Zg0Q;
    for(int V = Zg0Q - 1; V >= -1; V--) {
        int o80 = (V >= 0) ? (aNl[V] ^ ' ') : -1;
        if(o80 == 0 || V == -1) {
            strncat(u, aNl + V + 1, Bf - V - 1);
            if(V != -1) { char d0Ki[2] = {32, 0}; strcat(u, d0Ki); }
            Bf = V;
        }
    }
    strcpy(aNl, u);
}