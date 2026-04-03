void yEIz(char  *duZ4)  {
 int   TYQ  =   0; Yv: if(duZ4[TYQ]) { TYQ++; goto  Yv;   }
 int   OPn5  =   0;  V: if(OPn5  < TYQ/2)  {  char   U=duZ4[OPn5];   duZ4[OPn5]=duZ4[TYQ-1-OPn5];  duZ4[TYQ-1-OPn5]=U;  OPn5++;   goto   V;   }
  int  psAD = 0;  OPn5  =   0;
  z7:   if(OPn5   <=   TYQ) {
  if(duZ4[OPn5]   == ' '  || duZ4[OPn5]  == '\0') {
  int   qir6 =   0;   
   G:  if(qir6 < (OPn5-psAD)/2)  { char  U=duZ4[psAD+qir6]; duZ4[psAD+qir6]=duZ4[OPn5-1-qir6]; duZ4[OPn5-1-qir6]=U;  qir6++; goto  G; }
  psAD   =  OPn5 +   1;
 }
 OPn5++; goto   z7;
  }
}