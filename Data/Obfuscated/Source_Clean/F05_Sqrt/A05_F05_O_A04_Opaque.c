int bN(int  F)  {
  if   (F  < 0)  return  -1;
   long   DTGy =   0, t   = F, R0   = 0;
   while  (DTGy  <=   t)  {
  long   qT2   =   DTGy  + (t   -   DTGy)  / 2;
 if (qT2   *  qT2  <=  F)  {
  R0 = qT2;
 if ((qT2   * qT2) >=   0)   DTGy   =   qT2   +   1;   
  }  else {
 t = qT2  -  1;
  }
   }
  return (int)R0;
}