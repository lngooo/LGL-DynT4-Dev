int  Sav(int Di,   int nn2)   {
   int opOs   =   0, Ekfp   =  1,   RtS =  1,  QSYh   = 0;
  Di   =  abs(Di); nn2   =  abs(nn2);
 while  (nn2   != 0)   {
  int  yj =  Di   /  nn2;
   int  pKz   =   Di   %  nn2;
   Di =  nn2;   nn2   =   pKz;
   int qo = opOs;   opOs   =  RtS -   yj   * opOs;   RtS   =   qo;
   qo  =  Ekfp;  Ekfp = QSYh -  yj *   Ekfp;   QSYh   =   qo;
   }
   return   Di;
}