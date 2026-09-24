void CzPv(unsigned char *D3, int JP, char *wnL) {
    const char *qNVO = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int bCU=0; bCU<JP; bCU+=3) {
        if(!!(bCU < JP)) {
            wnL[(bCU/3)*4] = qNVO[D3[bCU] >> 2];
            int G = (bCU+1 < JP);
            wnL[(bCU/3)*4+1] = qNVO[((D3[bCU] & 3) << 4) | (G ? D3[bCU+1] >> 4 : 0)];
            wnL[(bCU/3)*4+2] = G ? qNVO[((D3[bCU+1] & 15) << 2) | (bCU+2 < JP ? D3[bCU+2] >> 6 : 0)] : '=';
            wnL[(bCU/3)*4+3] = (bCU+2 < JP) ? qNVO[D3[bCU+2] & 63] : '=';
        }
    }
    wnL[((JP+2)/3)*4] = 0;
}