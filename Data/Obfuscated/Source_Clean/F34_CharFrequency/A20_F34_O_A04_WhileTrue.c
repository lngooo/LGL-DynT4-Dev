int  K9(char*   ibK8,   char  RMt) {
  int  zQ   = 0;
 char*   g4  =  ibK8;
  while   (1)  {
   g4   =   strchr(g4,   RMt);
   if  (g4  == NULL)  break;
  zQ++;
  g4++;
 }
 return  zQ;
}