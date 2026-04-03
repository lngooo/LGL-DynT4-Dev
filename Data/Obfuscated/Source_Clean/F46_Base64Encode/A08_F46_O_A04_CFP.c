void BPD(unsigned char  *rhJ9,  int qM,  char  *J2)   {
   const  char  *SINt =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
   int iDj7 = 0, fJJ  =  0,  Xm = 0;
   while   (iDj7   != -1)   {
  switch(iDj7)   {
  case  0:   iDj7  = (fJJ  <  qM) ? 1   :  -1;   break;
   case 1:  J2[Xm++]   = SINt[rhJ9[fJJ]   >>   2];
 J2[Xm++]   = SINt[((rhJ9[fJJ] &  3)  << 4)  |   (fJJ+1   <  qM   ?   rhJ9[fJJ+1]  >> 4 : 0)];
  iDj7  =   (fJJ+1   < qM)   ?  2 :  3;  break;
   case  2: J2[Xm++]  = SINt[((rhJ9[fJJ+1] &   15)   <<   2)  |  (fJJ+2 < qM  ?   rhJ9[fJJ+2]  >>  6   :   0)];
   iDj7 =   (fJJ+2 < qM) ? 4   : 5;   break;
  case  3: J2[Xm++]  =   '=';  J2[Xm++] = '='; fJJ  +=   3; iDj7 =  0;   break;
  case  4: J2[Xm++] =   SINt[rhJ9[fJJ+2] &   63]; fJJ += 3; iDj7  = 0;   break;
  case 5:   J2[Xm++] = '=';  fJJ += 3; iDj7   =  0;  break;
   }
 }
 J2[Xm]   = '\0';
}