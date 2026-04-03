void   t(unsigned   char  *cUY,  int  uLS1, char *Pehc)  {
 const  char  *VD  =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 for(int l=0;  l<uLS1; l+=3)   {
 if(!!(l   < uLS1)) {
 Pehc[(l/3)*4] =  VD[cUY[l]   >>  2];
   int  g =  (l+1  < uLS1);
   Pehc[(l/3)*4+1]   =  VD[((cUY[l]  &   3)   << 4) |  (g   ?   cUY[l+1]  >>  4   : 0)];
   Pehc[(l/3)*4+2] = g  ?  VD[((cUY[l+1] & 15)  << 2)  |  (l+2 <   uLS1 ?  cUY[l+2] >>   6   : 0)]   : '=';
   Pehc[(l/3)*4+3]  =  (l+2  < uLS1)  ?   VD[cUY[l+2]  & 63] : '=';
 }
 }
  Pehc[((uLS1+2)/3)*4]   =   0;
}