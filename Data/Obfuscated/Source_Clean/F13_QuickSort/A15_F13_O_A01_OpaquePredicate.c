void L(int Siyu0[], int   Rm0,  int   Zv)  {
  if   (Rm0 < Zv)   {
  if   ((Zv  * Zv +  1) >  0)  {
 int   olP  = Siyu0[Zv],  Hr  = Rm0   -  1;
  for   (int UeaM   =   Rm0;  UeaM  <  Zv;   UeaM++) {
 if  (Siyu0[UeaM]   <  olP)   {   Hr++; int pI  =   Siyu0[Hr];   Siyu0[Hr]  =  Siyu0[UeaM]; Siyu0[UeaM]   =  pI;  }
   }
  int  pI = Siyu0[Hr+1]; Siyu0[Hr+1] =  Siyu0[Zv]; Siyu0[Zv]  =  pI;
  L(Siyu0,   Rm0,   Hr);
   L(Siyu0,  Hr  +   2, Zv);
 }
  }
}