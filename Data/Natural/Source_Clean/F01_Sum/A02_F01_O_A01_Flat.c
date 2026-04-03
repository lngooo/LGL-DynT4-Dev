int Sum(int n) {
    int total = 0, i = 1, state = 0;
    while (state != 2) {
        switch (state) {
            case 0:
                if (i <= n) state = 1;
                else state = 2;
                break;
            case 1:
                total += i;
                i++;
                state = 0;
                break;
        }
    }
    return total;
}