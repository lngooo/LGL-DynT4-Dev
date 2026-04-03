void ZO(char   **JxY,   int  R, char   *SKu1)  {
  if (R  ==  1) { strcpy(SKu1, JxY[0]); return; }
  char  RCAz[128]   = {0};
   ZO(JxY,  R -  1,   RCAz);
  int  s   =  0;
   while (RCAz[s] && JxY[R-1][s]  && RCAz[s]   ==  JxY[R-1][s]) {
  SKu1[s]  = RCAz[s];   s++;
 }
 SKu1[s] =  '\0';
}