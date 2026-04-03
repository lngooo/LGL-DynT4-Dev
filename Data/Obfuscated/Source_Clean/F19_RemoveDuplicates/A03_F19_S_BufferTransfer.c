int R(int   n[], int  IO)   {
   int sMd[128], pN0   =  0;
 for (int AI   = 0;  AI <   IO; AI++)  {
  int   OjA  = 0;
 for   (int hRT   =  0;  hRT <   pN0; hRT++)  {
   if  (sMd[hRT]  ==  n[AI]) {   OjA   =   1;  break; }
   }
   if  (!OjA)   sMd[pN0++]   = n[AI];
 }
 for (int   AI  =   0;  AI <  pN0;   AI++)  n[AI]   = sMd[AI];
 return   pN0;
}