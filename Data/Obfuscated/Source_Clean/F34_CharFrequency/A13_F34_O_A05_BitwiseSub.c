int ESdz(char* p5zH, char Ya) {
    int Way = 0;
    while (*p5zH) {

        int fQ = *p5zH ^ Ya;
        if (!fQ) {
            Way = -~Way; 
        }
        p5zH = (char*)((size_t)p5zH + 1);
    }
    return Way;
}