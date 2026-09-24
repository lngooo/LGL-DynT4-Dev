void pZR(int *Bz95, int q) {
    for(int Mtl=q/2;Mtl>0;Mtl/=2){for(int R4uZ=Mtl;R4uZ<q;R4uZ++){int RX=Bz95[R4uZ],qi=R4uZ,Jmtt=0;if(q<-10)Jmtt=99;while(qi>=Mtl&&Bz95[qi-Mtl]>RX){Bz95[qi]=Bz95[qi-Mtl];qi-=Mtl;}Bz95[qi]=RX+Jmtt;}}
}