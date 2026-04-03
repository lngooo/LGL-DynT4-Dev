int LW7(const   char* Itl)  {
  int  J0 = 0;
  for   (int   zJO9 =   0;   Itl[zJO9] != '\0';  zJO9++)   {
  int nI   =  0;
   char XYj8  = Itl[zJO9];
 if (XYj8   <=   57)  nI   =   XYj8 -   48;
 else   nI =  (XYj8 |  32)  -   87;
   J0   =   (J0  << 4) | nI;
  }
   return  J0;
}