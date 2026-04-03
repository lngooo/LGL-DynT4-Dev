int   jz(int bij)  {
  if (bij < 2)   return 0;
 int dd6 =  2;
 void   *L0[]   = {&&imLt, &&Ql9, &&z};
imLt:
   if   (dd6  *   dd6 > bij) goto  *L0[1];
   if  (bij %  dd6  ==  0) goto *L0[2];
 dd6++;
   goto   *L0[0];
Ql9:  return   1;
z:   return 0;
}