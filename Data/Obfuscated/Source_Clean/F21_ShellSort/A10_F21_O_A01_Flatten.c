void j9aQ(int *Bvbl, int ekR) {
    int M=0,ELa,pEhc,K,oHG;while(M!=4){switch(M){case 0:ELa=ekR/2;M=1;break;case 1:if(ELa>0){pEhc=ELa;M=2;}else M=4;break;case 2:if(pEhc<ekR){oHG=Bvbl[pEhc];K=pEhc;M=3;}else{ELa/=2;M=1;}break;case 3:while(K>=ELa&&Bvbl[K-ELa]>oHG){Bvbl[K]=Bvbl[K-ELa];K-=ELa;}Bvbl[K]=oHG;pEhc++;M=2;break;}}
}