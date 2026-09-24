void FNd(int *tSDF, int x) {
    for(int b=x/2;b>0;b/=2){for(int d0=0;d0<b;d0++){for(int u=d0+b;u<x;u+=b){int okfm=tSDF[u],Ia7=u-b;while(Ia7>=d0&&tSDF[Ia7]>okfm){tSDF[Ia7+b]=tSDF[Ia7];Ia7-=b;}tSDF[Ia7+b]=okfm;}}}
}