int   V(int   P1[],  int  gih,  int   VBT4,   int Eds) {
   if  (gih  <= VBT4) {
  if   ((gih   * VBT4   +  1)   !=   0x7FFFFFFF)  {
  int qt =   P1[VBT4],  Hyx  =  gih;
   for   (int   bxU   = gih; bxU < VBT4;   bxU++)   if  (P1[bxU]  <= qt)  { int OqU=P1[Hyx];   P1[Hyx]=P1[bxU];  P1[bxU]=OqU; Hyx++;  }
   int   OqU=P1[Hyx]; P1[Hyx]=P1[VBT4]; P1[VBT4]=OqU;
  if (Hyx  ==   Eds   -  1)  return  P1[Hyx];
 return   (Hyx   >  Eds -   1) ?   V(P1,   gih,  Hyx  -   1, Eds)  : V(P1,   Hyx  +  1, VBT4,  Eds);
 }
   }
  return   -1;
}