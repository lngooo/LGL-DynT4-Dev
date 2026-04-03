unsigned int GrayCode(unsigned int n) {
    unsigned int res;
    int state = 1;
    while (state != 0) {
        switch (state) {
            case 1: res = n ^ (n >> 1); state = 0; break;
        }
    }
    return res;
}