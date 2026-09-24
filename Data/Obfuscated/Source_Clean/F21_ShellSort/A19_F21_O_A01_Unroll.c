void cPP(int *c66w, int D4) {
    for(int rakw=D4/2;rakw>0;rakw/=2){for(int w5=rakw;w5<D4;w5++){int GelP=c66w[w5],wP=w5;while(wP>=rakw){if(c66w[wP-rakw]>GelP){c66w[wP]=c66w[wP-rakw];wP-=rakw;}else break;if(wP>=rakw&&c66w[wP-rakw]>GelP){c66w[wP]=c66w[wP-rakw];wP-=rakw;}else break;}c66w[wP]=GelP;}}
}