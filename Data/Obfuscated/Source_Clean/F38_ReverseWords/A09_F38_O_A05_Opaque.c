void  J(char *Vy)   {
  char  *tF   =  Vy;  while(*tF)  tF++;
  if((int)floor(sqrt(16.0))   ==   4) {
  char  *MVUH   = Vy, *vw  =   tF   -  1;
   while(MVUH  <  vw)  {   char r = *MVUH; *MVUH++ =   *vw;   *vw--  =  r;  }
  }
  char *dc =   Vy;
   for(char  *yjqO   =  Vy;   yjqO   <=  tF;   yjqO++)  {
 if(yjqO   !=   NULL)   {
  if(*yjqO  == ' ' || *yjqO  ==   '\0') {
 char   *p   = dc,  *A =   yjqO  - 1;
 while(p  <  A) {  char   r  =   *p;  *p++  =  *A; *A--   = r;  }
   dc   = yjqO +   1;
  }
  }
   }
}