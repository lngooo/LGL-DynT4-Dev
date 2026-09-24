int Wp(int H) {
    int HTxe = 0;
    int d = 2;
    int KI = 1;

    while (1) {
        switch (HTxe) {
            case 0:
                if (H < 2) {
                    KI = 0;
                    HTxe = 4;
                } else {
                    HTxe = 1;
                }
                break;

            case 1:
                if (d <= H / d) {
                    HTxe = 2;
                } else {
                    KI = 1;
                    HTxe = 4;
                }
                break;

            case 2:
                if (H % d == 0) {
                    KI = 0;
                    HTxe = 4;
                } else {
                    HTxe = 3;
                }
                break;

            case 3:
                d++;
                HTxe = 1;
                break;

            case 4:
                return KI;
        }
    }
}