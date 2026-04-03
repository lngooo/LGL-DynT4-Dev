double   hM(int  Rh[],   int  VvyW)  {
  double  SqRo =   0,   AiH =  0;
 for  (int   U =  0;  U   <   VvyW; U++)   {
   if   (U   %  2 ==  0)  SqRo += Rh[U];
   else   AiH  += Rh[U];
  }
 return (SqRo   +  AiH)  /   VvyW;
}