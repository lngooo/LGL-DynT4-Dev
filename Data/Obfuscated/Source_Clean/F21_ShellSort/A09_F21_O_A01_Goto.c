void K(int *peI, int r) {
    int NS=r/2;zzgo:if(NS<=0)goto Fnk;int wO=NS;TMs:if(wO>=r){NS/=2;goto zzgo;}int G6=peI[wO],Vt26=wO;ku:if(Vt26>=NS&&peI[Vt26-NS]>G6){peI[Vt26]=peI[Vt26-NS];Vt26-=NS;goto ku;}peI[Vt26]=G6;wO++;goto TMs;Fnk:;
}