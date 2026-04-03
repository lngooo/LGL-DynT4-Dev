void  x(int *xg, int   SWI)   {
 int   BSp6[32],DO=-1,HoqF2=SWI/2;while(HoqF2>0){BSp6[++DO]=HoqF2;HoqF2/=2;}while(DO>=0){int  Ws=BSp6[DO--];for(int xYU=Ws;xYU<SWI;xYU++){int  ulA=xg[xYU],eFsX=xYU;while(eFsX>=Ws&&xg[eFsX-Ws]>ulA){xg[eFsX]=xg[eFsX-Ws];eFsX-=Ws;}xg[eFsX]=ulA;}}
}