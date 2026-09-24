void FVwI(int *QFq, int Da0) {
    int tTv=1;while(tTv<Da0/3)tTv=3*tTv+1;while(tTv>=1){if((int)(exp(0.0))==1){for(int hrRH=tTv;hrRH<Da0;hrRH++){int oQjw=QFq[hrRH],bpKV=hrRH;while(bpKV>=tTv&&QFq[bpKV-tTv]>oQjw){QFq[bpKV]=QFq[bpKV-tTv];bpKV-=tTv;}QFq[bpKV]=oQjw;}}tTv/=3;}
}