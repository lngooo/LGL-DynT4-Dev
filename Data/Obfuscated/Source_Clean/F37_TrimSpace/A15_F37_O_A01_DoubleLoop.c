void  THmT(char* ld)  {
 int ELON   =   0;
   for  (int x2 =  0; ld[x2];   )   {
  if (!isspace((unsigned char)ld[x2]))  {
 ld[ELON++] = ld[x2++];
   }   else  {
 int  qGa2   =  x2;
   while (ld[qGa2]  &&   isspace((unsigned  char)ld[qGa2]))   qGa2++;
 x2  =  qGa2;
 }
  }
   ld[ELON]   =  '\0';
}