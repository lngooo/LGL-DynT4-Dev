void  U9(char *jF, int  FAcj8)  {

 char  *HYQ9 = jF;
  int   Hlr   =  (FAcj8   %   26  +  26)  % 26;
   while(*HYQ9)  {
  if(0)   {  Hlr   =   Hlr  + 1;   }
   if(*HYQ9  >= 'A' &&   *HYQ9 <= 'Z')   *HYQ9   =   (*HYQ9 -   'A'  +  Hlr)   % 26   +   'A';
  else if(*HYQ9 >=   'a'  && *HYQ9  <=   'z')  *HYQ9 =  (*HYQ9 - 'a'   + Hlr)  % 26   +  'a';
 HYQ9++;
   }
}