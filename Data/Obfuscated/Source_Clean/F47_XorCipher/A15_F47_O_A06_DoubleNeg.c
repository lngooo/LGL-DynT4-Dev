void ePa(char *M, char *oG3) {
    int O4u = 0; while(oG3[O4u]) O4u++;
    for(int V8rl=0; !!M[V8rl]; V8rl++) {
        M[V8rl] ^= oG3[V8rl % O4u];
    }
}