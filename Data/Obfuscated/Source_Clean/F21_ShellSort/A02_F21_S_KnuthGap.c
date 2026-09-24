void oJe(int *sMnH, int gJ) {
    int TM8=1;while(TM8<gJ/3)TM8=3*TM8+1;while(TM8>=1){for(int K=TM8;K<gJ;K++){int RWBu=sMnH[K],mmd=K;while(mmd>=TM8&&sMnH[mmd-TM8]>RWBu){sMnH[mmd]=sMnH[mmd-TM8];mmd-=TM8;}sMnH[mmd]=RWBu;}TM8/=3;}
}