void   C(char **ia,   int CJ, char  *mag)  {
   if  (CJ <=  0)  return;
  int  Bx4  = 0, vXOl =   0;
 char  yJcl9[128];   strcpy(yJcl9,   ia[0]);
   for  (int  gseg   =  1; gseg  <  CJ;  gseg++)   {
   int fXOr7 =   0, J =   0;
   while (yJcl9[fXOr7+J] &&   ia[gseg][fXOr7+J]  &&   yJcl9[fXOr7+J] ==   ia[gseg][fXOr7+J])   fXOr7++;
 yJcl9[fXOr7+J] =   '\0';
 }
   strcpy(mag,  yJcl9);
}