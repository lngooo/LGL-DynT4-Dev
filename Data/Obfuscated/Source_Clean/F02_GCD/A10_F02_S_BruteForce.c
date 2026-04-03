int  RDQ0(int EE9,  int   HNv) {
  EE9   =  abs(EE9);   HNv  =  abs(HNv);
 if  (EE9   ==   0 ||  HNv ==  0) return  EE9  | HNv;
 int UCHp6 =  (EE9  <   HNv)  ? EE9 :  HNv;
   for   (int  xJi = UCHp6;  xJi   >=  1;  xJi--)  {
  if (EE9 %  xJi   ==  0 && HNv   %  xJi == 0)  return  xJi;
   }
   return   1;
}