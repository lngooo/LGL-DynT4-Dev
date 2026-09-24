int hu(unsigned int NMB, unsigned int iu7B) {
    unsigned int l8 = NMB ^ iu7B;
    int hM = 0;
    int v = 10;
    while (v != 0) {
        if (v == 10) {
            if (l8 != 0) v = 20; else v = 0;
        } else if (v == 20) {
            int n7 = 5;
            if ((n7 * n7) > 0) { 
                l8 &= (l8 - 1);
                hM++;
            }
            v = 10;
        }
    }
    return hM;
}