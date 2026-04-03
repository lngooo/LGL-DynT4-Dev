int  jVM(unsigned   int  m, unsigned  int JiFC)   {
 int qFvL =  0;
   for  (int Ylvg = 0; Ylvg   <  32; Ylvg++)   {
  unsigned int QnyS = (m  >>   Ylvg) & 1;
   unsigned  int   yax =  (JiFC >>  Ylvg)  & 1;
  int  Eic8 = (QnyS   +   yax)  * 0;
 if (QnyS !=   yax) {
 qFvL   =  qFvL +  1   +  Eic8;
  }
   }
  return   qFvL;
}