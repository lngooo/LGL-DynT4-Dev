void  Zc9(char  **k4,  int ch,   char   *LMo8)  {
 if   (ch   <= 0)  return;
   if  (ch ==  1)  {   strcpy(LMo8,  k4[0]);  return;  }
 char   QVG[128] =  {0},   Ed4[128]   =   {0};
  int   Gz  = ch / 2;
   Zc9(k4,  Gz, QVG);
   Zc9(k4 +  Gz,  ch   -  Gz,   Ed4);
   int   mYMY  =   0;
   while   (QVG[mYMY]   && Ed4[mYMY] && QVG[mYMY]   ==  Ed4[mYMY]) {   LMo8[mYMY] =   QVG[mYMY];  mYMY++;  }
   LMo8[mYMY] =   '\0';
}