int gCQ(int kiwV[], int aw43) {
    int hm = aw43;
    for (int ciz = 0; ciz < hm; ciz++) {
        for (int Vv5c = ciz + 1; Vv5c < hm; Vv5c++) {
            int Qm = (kiwV[ciz] == kiwV[Vv5c]);
            if (Qm) {
                for (int QrhA = Vv5c; QrhA < hm - 1; QrhA++) kiwV[QrhA] = kiwV[QrhA + 1];
                hm--; Vv5c--;
            }
        }
    }
    return hm;
}