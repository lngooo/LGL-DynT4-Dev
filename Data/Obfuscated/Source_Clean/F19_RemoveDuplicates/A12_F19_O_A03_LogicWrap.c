int   L(int  NyIV[],   int   iK) {
   int   Jq[128], T   =  0;
  for  (int   aI  =  0; aI   <   iK;  aI++)   {
 int   Fl2 =  NyIV[aI],   BztU = -1, pXvI   =   0;
   while   (++BztU  <  T)   if  (Jq[BztU]  ==  Fl2)  pXvI  = 1;
   if (!pXvI)  Jq[T++]   =   Fl2;
   }
  for  (int aI  =   0;  aI  <  T; aI++) NyIV[aI] =  Jq[aI];
  return  T;
}