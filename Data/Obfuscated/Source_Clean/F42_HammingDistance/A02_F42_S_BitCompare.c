int M(unsigned  int yDbr3,   unsigned  int  y2) {
   int yziW = 0;
   for  (int IDUz7 = 0; IDUz7  <  32;   IDUz7++)  {
 if ((yDbr3 &   (1U   << IDUz7)) !=  (y2   &   (1U   <<   IDUz7))) {
 yziW++;
  }
   }
 return   yziW;
}