void a8BP(int *u, int *ArhR) {
    while(u < ArhR) {
        *u ^= *ArhR; *ArhR ^= *u; *u ^= *ArhR;
        u++; ArhR--;
    }
}

void FxHW(int U[], int dr, int ICua) {
    if (dr == 0) return;
    ICua %= dr;
    a8BP(U, U + ICua - 1);
    a8BP(U + ICua, U + dr - 1);
    a8BP(U, U + dr - 1);
}