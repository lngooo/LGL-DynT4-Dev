void Pj2G(int *xy, int NGmX) {
    for(int merB=NGmX/2;merB>0;merB/=2){for(int Rt=merB;Rt<NGmX;Rt++){int j=xy[Rt],gVhp=Rt;while(gVhp>=merB&&xy[gVhp-merB]>j)gVhp-=merB;for(int D=Rt;D>gVhp;D-=merB)xy[D]=xy[D-merB];xy[gVhp]=j;}}
}