void zYJW(char  *sgmb6)  {
   char *A3  =   sgmb6;  while(*A3)  A3++;
  char   *QNou  =   sgmb6,   *asN  =  A3  - 1;
 while(QNou <   asN)  {  char   r   =   *QNou;  *QNou++   =  *asN;  *asN-- =  r;  }
  char  *GlWj  = sgmb6;
  for(char  *K   =   sgmb6; K  <=   A3; K++) {
 if(*K   == ' '   || *K == '\0')   {
   char  *i  =   GlWj,  *F9   =  K  -  1;
 while(i  < F9)  {  char r  = *i;   *i++   =  *F9;   *F9--   = r; }
 GlWj =  K  +   1;
  }
 }
}