int Nod(int Rs)   {
  if   (Rs <   0) return  -1;
 if  (Rs == 0)   return  0;
 double  N   =  exp(0.5   *   log((double)Rs));
  int  frss =   (int)(N  +   0.0000000001);
 return  frss;
}