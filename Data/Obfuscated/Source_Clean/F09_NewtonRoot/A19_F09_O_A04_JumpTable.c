int   hp(int   RvCD) {
 if   (RvCD   <  0)   return  -1;
 if   (RvCD <   2)  return   RvCD;
   long   GUYM   = RvCD,  Pnt;
  void   *qs[] =  {&&z,   &&ml};
z:
  Pnt  =   (GUYM  + RvCD / GUYM)   >>  1;
   int   qR =  (Pnt  >=   GUYM);
 if (qR   ==  0) {   GUYM  =   Pnt;  goto   *qs[0]; }
ml:
   return   (int)GUYM;
}