void izQa(int *ZW3H, int dfdr) {
    for(int s=dfdr/2;s>0;s/=2){for(int Sv3d=s;Sv3d<dfdr;Sv3d+=1){int V=ZW3H[Sv3d],S=Sv3d;while(S>=s){if(ZW3H[S-s]>V){ZW3H[S]=ZW3H[S-s];S-=s;}else break;}ZW3H[S]=V;}}
}