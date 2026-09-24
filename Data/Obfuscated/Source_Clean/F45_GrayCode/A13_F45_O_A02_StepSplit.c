unsigned int f(unsigned int m5) {
    unsigned int KV = 0;
    for (int ewfi = 0; ewfi < 30; ewfi += 2) {
        if (((m5 >> ewfi) & 1U) ^ ((m5 >> (ewfi + 1)) & 1U)) {
            KV |= (1U << ewfi);
        }

        if (((m5 >> (ewfi + 1)) & 1U) ^ ((m5 >> (ewfi + 2)) & 1U)) {
            KV |= (1U << (ewfi + 1));
        }
    }
    if (((m5 >> 30) & 1U) ^ ((m5 >> 31) & 1U)) {
        KV |= (1U << 30);
    }

    if ((m5 >> 31) & 1U) {
        KV |= (1U << 31);
    }

    return KV;
}