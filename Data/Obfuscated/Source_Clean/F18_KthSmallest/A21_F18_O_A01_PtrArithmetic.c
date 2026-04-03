int   NmDY(int  ffB[], int zBhk4,  int WC2,   int GfY)   {
   if  (zBhk4   > WC2)   return  -1;
  int  k   =   *(ffB   + WC2), Sap   = zBhk4;
   for (int  djD = zBhk4;   djD   <   WC2; djD++)   {
   if   (*(ffB  +   djD) <= k)  {
  int L2   = *(ffB +  Sap); *(ffB  +  Sap)   = *(ffB   +  djD); *(ffB + djD) = L2;
  Sap++;
   }
  }
 int  L2  =  *(ffB  +  Sap);  *(ffB +   Sap) =   *(ffB   +   WC2);   *(ffB   + WC2) = L2;
 if (Sap   ==  GfY  -  1)  return *(ffB  +   Sap);
   return (Sap >   GfY - 1)  ? NmDY(ffB,  zBhk4,  Sap  -   1,  GfY) :   NmDY(ffB,   Sap +  1,   WC2,  GfY);
}