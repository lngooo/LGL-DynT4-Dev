int wdx(const   char *S8)  {
  int  ny =   0,  N   =   0;
   while   (N   !=  2)  {
   switch  (N) {
 case  0: if (S8[ny]  != '\0') N  = 1; else   N  =  2; break;
  case 1: ny++;   N  = 0;   break;
   }
   }
  return ny;
}