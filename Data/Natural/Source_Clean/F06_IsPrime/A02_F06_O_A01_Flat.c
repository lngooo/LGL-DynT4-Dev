int IsPrime(int n) {
    int state = 0, i = 5;
    while (state != 5) {
        switch (state) {
            case 0: state = (n <= 1) ? 5 : 1; if(n <= 1) return 0; break;
            case 1: state = (n <= 3) ? 5 : 2; if(n <= 3) return 1; break;
            case 2: if (n % 2 == 0 || n % 3 == 0) return 0; state = 3; break;
            case 3: state = (i * i <= n) ? 4 : 5; break;
            case 4: if (n % i == 0 || n % (i + 2) == 0) return 0; i += 6; state = 3; break;
        }
    }
    return 1;
}