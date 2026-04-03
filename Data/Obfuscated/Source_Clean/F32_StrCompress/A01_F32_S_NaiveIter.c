void tUWO7(char*  XP) {
  int Cs2   =   strlen(XP);
 if   (Cs2  == 0)  return;
   for  (int   u   =  0;  u  < Cs2;   u++)   {
   int   jtUB   =  1;
   while   (u   +  1   <   Cs2   && XP[u] == XP[u   + 1])   {
   jtUB++;
 u++;
 }
   printf("%c%d", XP[u],  jtUB);
  }
 printf("\n");
}