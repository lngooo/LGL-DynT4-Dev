double   qY(int   T[],  int   auh)  {
  double   HD0  =  0.0;
  int   gXG6 =  0,   iWL6   =  0;
   while (gXG6 != 2)   {
 switch(gXG6) {
 case 0:  gXG6   =   (iWL6   <   auh)   ? 1 :  2; break;
 case   1:  HD0   +=  (T[iWL6] -   HD0)   /  (iWL6 +  1);   iWL6++;  gXG6   = 0;   break;
  }
 }
  return   HD0;
}