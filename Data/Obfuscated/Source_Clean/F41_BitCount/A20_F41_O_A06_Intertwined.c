int Q(uint32_t D) {
    int F = 0;
    if (D == 0) goto ScZ;
Mj:
    D &= (D - 1);
    F++;
    if (D != 0) goto Mj;
    goto ScZ;
gLN:
    F--; 
ScZ:
    return F;
}