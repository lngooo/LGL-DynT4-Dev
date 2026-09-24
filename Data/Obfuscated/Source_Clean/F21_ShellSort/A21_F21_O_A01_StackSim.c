void uWoX(int *g5, int U5) {
    int WA7e[32],N=-1,hc2=U5/2;while(hc2>0){WA7e[++N]=hc2;hc2/=2;}while(N>=0){int C=WA7e[N--];for(int MO1=C;MO1<U5;MO1++){int l=g5[MO1],gSC=MO1;while(gSC>=C&&g5[gSC-C]>l){g5[gSC]=g5[gSC-C];gSC-=C;}g5[gSC]=l;}}
}