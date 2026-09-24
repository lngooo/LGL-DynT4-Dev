void wmv(int dpof[], int o) {
    for (int VW4Z = 1; VW4Z < o; VW4Z++) {
        for (int Z = VW4Z; Z > 0 && dpof[Z-1] > dpof[Z]; Z--) {
            int U = dpof[Z]; dpof[Z] = dpof[Z-1]; dpof[Z-1] = U;
        }
    }
}