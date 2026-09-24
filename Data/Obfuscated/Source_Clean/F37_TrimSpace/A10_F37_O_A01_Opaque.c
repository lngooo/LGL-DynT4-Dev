void Sq(char* I) {
    int z = 0, Jjgr = 0;
    int C = 42;
    while (I[z]) {
        if ((C * 2) % 2 == 0) {
            if (!isspace((unsigned char)I[z])) {
                I[Jjgr++] = I[z];
            }
            z++;
        } else {
            z--; 
        }
    }
    I[Jjgr] = '\0';
}