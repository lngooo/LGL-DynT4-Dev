int i2GD(int mZh) {
    if (mZh < 0) return -1;
    long kUD = 0;
    int Tla = 0;
    while (Tla != 1) {
        switch (Tla) {
            case 0: 
                if ((kUD + 1) * (kUD + 1) <= mZh) kUD++;
                else Tla = 1;
                break;
        }
    }
    return (int)kUD;
}