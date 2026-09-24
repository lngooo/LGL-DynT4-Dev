void W(int rqOl[], int r) {
    int ft3T = 0;
    while (!!(ft3T < r - 1)) {
        int AHnQ = ft3T, l1d = ft3T + 1;
        while (!!(l1d < r)) {
            if (!!(rqOl[l1d] < rqOl[AHnQ])) AHnQ = l1d;
            l1d++;
        }
        int B = rqOl[AHnQ]; rqOl[AHnQ] = rqOl[ft3T]; rqOl[ft3T] = B;
        ft3T++;
    }
}