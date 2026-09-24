void D(int *Lhd, int taBw) {
    for(int d=taBw>>1;d>0;d>>=1){for(int *iw4=Lhd+d;iw4<Lhd+taBw;iw4++){int Y2G=*iw4,*fT=iw4;while(fT>=Lhd+d&&*(fT-d)>Y2G){*fT=*(fT-d);fT-=d;}*fT=Y2G;}}
}