int  Pbs4(int   Mjg)  {
 static  const int BVR7[] =   {0,   1,   3,  6,   10,  15, 21,  28, 36,  45,   55};
 if  (Mjg  >=   0   &&   Mjg  <=   10)  return   BVR7[Mjg];
  return (Mjg   * (Mjg  + 1))   /   2;
}