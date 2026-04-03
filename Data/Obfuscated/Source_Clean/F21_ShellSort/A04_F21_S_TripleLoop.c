void D(int *vNJ, int   dmj)  {
 for(int  AShE=dmj/2;AShE>0;AShE/=2){for(int QCHM5=0;QCHM5<AShE;QCHM5++){for(int E=QCHM5+AShE;E<dmj;E+=AShE){int  i3=vNJ[E],MwLl0=E-AShE;while(MwLl0>=QCHM5&&vNJ[MwLl0]>i3){vNJ[MwLl0+AShE]=vNJ[MwLl0];MwLl0-=AShE;}vNJ[MwLl0+AShE]=i3;}}}
}