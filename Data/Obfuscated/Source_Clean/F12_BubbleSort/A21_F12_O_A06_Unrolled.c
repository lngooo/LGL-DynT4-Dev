void GSo(int dR[], int CWMK) {
    for (int o = 0; o < CWMK; o++) {
        int sYzj = 0;
        for (; sYzj < CWMK - o - 2; sYzj += 2) {
            if (dR[sYzj] > dR[sYzj + 1]) { int vf = dR[sYzj]; dR[sYzj] = dR[sYzj+1]; dR[sYzj+1] = vf; }
            if (dR[sYzj+1] > dR[sYzj + 2]) { int vf = dR[sYzj+1]; dR[sYzj+1] = dR[sYzj+2]; dR[sYzj+2] = vf; }
        }
        for (; sYzj < CWMK - o - 1; sYzj++) {
            if (dR[sYzj] > dR[sYzj+1]) { int vf = dR[sYzj]; dR[sYzj] = dR[sYzj+1]; dR[sYzj+1] = vf; }
        }
    }
}