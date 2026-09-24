void pKbs(int *P, int D) {
    int i19=(int)(log10(D+1)/log10(2));while(i19>0){int c5I6=(1<<i19)-1;for(int v=c5I6;v<D;v++){int e=P[v],g1ZA=v;while(g1ZA>=c5I6&&P[g1ZA-c5I6]>e){P[g1ZA]=P[g1ZA-c5I6];g1ZA-=c5I6;}P[g1ZA]=e;}i19--;}
}