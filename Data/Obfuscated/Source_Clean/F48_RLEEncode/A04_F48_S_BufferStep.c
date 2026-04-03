void  GrYq6(const   char *si, char  *LwJn4)   {
  int  Dvmz1 = strlen(si);
 if  (Dvmz1   ==  0)  return;
  char  N4  = si[0];
  int  TKj =  0,  Y =  0;
   for   (int  m7 = 0;   m7 <= Dvmz1;   m7++) {
   if  (si[m7]   ==   N4  && m7   < Dvmz1)   {
  TKj++;
 }  else   {
  Y   +=  sprintf(LwJn4   +   Y,   "%c%d",  N4,  TKj);
   if  (m7 < Dvmz1)   { N4  =  si[m7];   TKj = 1; }
   }
   }
}