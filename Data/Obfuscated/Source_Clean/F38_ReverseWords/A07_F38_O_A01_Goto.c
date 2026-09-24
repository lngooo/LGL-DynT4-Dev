void rAYW(char *mu) {
    int A3L = 0; RYg: if(mu[A3L]) { A3L++; goto RYg; }
    int a = 0; UX: if(a < A3L/2) { char D=mu[a]; mu[a]=mu[A3L-1-a]; mu[A3L-1-a]=D; a++; goto UX; }
    int lax0 = 0; a = 0;
    v8V: if(a <= A3L) {
        if(mu[a] == ' ' || mu[a] == '\0') {
            int C1ev = 0; 
            S: if(C1ev < (a-lax0)/2) { char D=mu[lax0+C1ev]; mu[lax0+C1ev]=mu[a-1-C1ev]; mu[a-1-C1ev]=D; C1ev++; goto S; }
            lax0 = a + 1;
        }
        a++; goto v8V;
    }
}