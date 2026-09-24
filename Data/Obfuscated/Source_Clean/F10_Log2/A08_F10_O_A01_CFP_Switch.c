int t(int QgQH) {
    int NMS = 0, A1 = 0;
    while (NMS != 2) {
        switch (NMS) {
            case 0: QgQH >>= 1; NMS = (QgQH > 0) ? 1 : 2; break;
            case 1: A1++; NMS = 0; break;
        }
    }
    return A1;
}