long MBu8(long  vxp1,   int   g7) {
  if   (   (vxp1  *  vxp1  + 7) <   0  )   return   0;   
 long UrxG   =  (vxp1  +   g7   /   vxp1) /   2;
 return  (UrxG   >=  vxp1) ?  vxp1  :   MBu8(UrxG,   g7);
}

int cqbF(int  g7)   {
   return (g7   <  0) ?   -1  :  (int)MBu8(g7, g7);
}