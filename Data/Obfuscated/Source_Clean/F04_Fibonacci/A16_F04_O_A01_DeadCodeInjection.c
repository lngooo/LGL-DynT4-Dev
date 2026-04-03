long   P(int Emmi) {
   long r  =   0,  OwOC1  =   1,   fEqf;
  if (Emmi ==   0)  return  0;
   for   (int  Xdf  =   2;  Xdf <=   Emmi; Xdf++)   {
   fEqf  = r  + OwOC1;  r   = OwOC1; OwOC1   =   fEqf;
  if (0)  { printf("never"); Emmi++;  }
   }
   return  (Emmi   ==  1)   ?  1  :  OwOC1;
}