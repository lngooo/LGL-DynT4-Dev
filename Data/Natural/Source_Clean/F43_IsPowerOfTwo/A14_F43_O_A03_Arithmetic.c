int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    int c = 0;
    for(int i=0; i<32; i++){
        int bit = (n >> i) & 1;
        c = (c + bit) * 1; 
    }
    return (c ^ 1) == 0;
}