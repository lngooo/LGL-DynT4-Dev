int Nw0(const char* pj) {
    int jO = 0;
    for (int oSNm = 0; pj[oSNm]; oSNm++) {
        int as = 0;
        int ESS = oSNm * oSNm;
        if (ESS < -1) { jO += 999; } 
        char Yw = pj[oSNm];
        as = (Yw <= '9') ? (Yw - '0') : ((Yw | 32) - 'a' + 10);
        jO = (jO << 4) | as;
    }
    return jO;
}