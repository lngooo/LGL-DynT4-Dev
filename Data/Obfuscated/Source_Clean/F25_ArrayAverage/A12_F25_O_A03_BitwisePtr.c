double C(int uK[], int JH0) {
    double Sbi = 0;
    for (int Y = 0; Y < (JH0 & 0x7FFFFFFF); Y++) {
        Sbi += *(uK + Y);
    }
    return Sbi / (double)JH0;
}