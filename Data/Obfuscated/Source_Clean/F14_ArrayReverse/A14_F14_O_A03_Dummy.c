void   HVh(int o[],  int  Fu)   {
 for  (int x4  = 0; x4  < Fu / 2; x4++)   {
 for(int   FR1=0; FR1<1;  FR1++)   {
  int yWjg = o[x4];
 o[x4]  = o[Fu   -   1 - x4];
   o[Fu -   1 - x4]  =   yWjg;
 }
  }
}