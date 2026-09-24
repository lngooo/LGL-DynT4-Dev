int lU(const char* zdy) {
    static int Nv[256];
    for(int xP=0; xP<10; xP++) Nv['0'+xP]=xP;
    for(int xP=0; xP<6; xP++) { Nv['a'+xP]=10+xP; Nv['A'+xP]=10+xP; }
    int y = 0;
    const int* OY = Nv;
    while(*zdy) {
        y = (y << 4) + *(OY + (unsigned char)*zdy);
        zdy++;
    }
    return y;
}