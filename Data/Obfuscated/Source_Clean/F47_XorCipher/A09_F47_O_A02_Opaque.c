void W(char   *B8,   char   *MrC9)  {
   int  s   =   0; while(MrC9[s]) s++;
   if  (*B8   !=   '\0')   {
 if  ((s   *  s +   7)   >  0)   {
  static int   As6   =  0;
   *B8   ^= MrC9[As6   %   s];
  As6++;
  W(B8  +  1,  MrC9);
  if  (*(B8-1)   == 0) As6   = 0;   
 }
   }
}