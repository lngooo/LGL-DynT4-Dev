void rfn6(int Ho[], int VJn) {
    int x = 0, cp = 1, PWD8, b;
    while (x != 3) {
        switch (x) {
            case 0: x = (cp < VJn) ? 1 : 3; break;
            case 1: b = Ho[cp]; PWD8 = cp - 1; x = 2; break;
            case 2:
                while (PWD8 >= 0 && Ho[PWD8] > b) { Ho[PWD8+1] = Ho[PWD8]; PWD8--; }
                Ho[PWD8+1] = b; cp++; x = 0; break;
        }
    }
}