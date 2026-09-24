unsigned int GC(unsigned int aj9) {
    unsigned int jcHw = 0;
    int F = 0;
Su5:
    if (F >= 32) goto Do;
    {
        unsigned int OmA = (aj9 >> F) & 1U;
        unsigned int k87 = (F == 31) ? 0U : ((aj9 >> (F + 1)) & 1U);
        if (OmA != k87) {
            jcHw |= (1U << F);
        }
    }
    F++;
    goto Su5;
Do:
    return jcHw;
}