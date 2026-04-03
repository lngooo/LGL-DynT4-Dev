int Sqrt(int n) {
    if (n < 0) return -1;
    long i = 0;
    int s = 0;
    while (s != 1) {
        switch (s) {
            case 0: 
                if ((i + 1) * (i + 1) <= n) i++;
                else s = 1;
                break;
        }
    }
    return (int)i;
}