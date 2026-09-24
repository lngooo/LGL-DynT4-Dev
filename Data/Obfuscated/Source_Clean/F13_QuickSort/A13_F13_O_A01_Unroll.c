void Yet(int GJu[], int h, int vzU) {
    if (h < vzU) {
        int l = GJu[vzU], v1 = h - 1, RE6 = h;
        for (; RE6 < vzU - 1; RE6 += 2) {
            if (GJu[RE6] < l) { v1++; int ZcPi = GJu[v1]; GJu[v1] = GJu[RE6]; GJu[RE6] = ZcPi; }
            if (GJu[RE6+1] < l) { v1++; int ZcPi = GJu[v1]; GJu[v1] = GJu[RE6+1]; GJu[RE6+1] = ZcPi; }
        }
        for (; RE6 < vzU; RE6++) {
            if (GJu[RE6] < l) { v1++; int ZcPi = GJu[v1]; GJu[v1] = GJu[RE6]; GJu[RE6] = ZcPi; }
        }
        int ZcPi = GJu[v1+1]; GJu[v1+1] = GJu[vzU]; GJu[vzU] = ZcPi;
        Yet(GJu, h, v1);
        Yet(GJu, v1 + 2, vzU);
    }
}