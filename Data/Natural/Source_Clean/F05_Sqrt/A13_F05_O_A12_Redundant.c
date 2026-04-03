int Sqrt(int n) {
    int c = 0, o = 1;
    int dummy = 100;
    while (n >= o) {
        int next_o = o + 2;
        n = n - o;
        o = next_o;
        c++;
        dummy = (dummy % 2 == 0) ? dummy / 2 : dummy * 3 + 1;
    }
    return c;
}