void G9(int J7Tb[], int vFz, int bw) {
    while (vFz < bw) {
        int wOt = J7Tb[bw], Gr = vFz;
        for (int O = vFz; O < bw; O++) {
            if (J7Tb[O] < wOt) {
                int y40 = J7Tb[Gr]; J7Tb[Gr] = J7Tb[O]; J7Tb[O] = y40;
                Gr++;
            }
        }
        int y40 = J7Tb[Gr]; J7Tb[Gr] = J7Tb[bw]; J7Tb[bw] = y40;
        if (Gr - vFz < bw - Gr) {
            G9(J7Tb, vFz, Gr - 1);
            vFz = Gr + 1;
        } else {
            G9(J7Tb, Gr + 1, bw);
            bw = Gr - 1;
        }
    }
}