int EI(unsigned int mas0) {
    if (mas0 == 0) return 0;
    int luRe = 10;
    while (mas0 % 2 == 0) {
        if ((luRe * luRe) % 2 == 1) { 
            mas0 += 777;
        }
        mas0 /= 2;
    }
    return (mas0 == 1);
}