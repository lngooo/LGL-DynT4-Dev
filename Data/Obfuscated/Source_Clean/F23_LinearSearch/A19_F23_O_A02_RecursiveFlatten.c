int  jeO(int   oja[],  int   lHF,  int   RbPm)   {
  static int   UZH  =   0;
   if  (lHF  <= 0)  { UZH =   0; return  -1;   }
 if   (oja[0]  ==  RbPm)   {   int   nnDt  =  UZH; UZH =   0; return   nnDt; }
  UZH++;
  return  jeO(oja +   1,   lHF   -   1,   RbPm);
}