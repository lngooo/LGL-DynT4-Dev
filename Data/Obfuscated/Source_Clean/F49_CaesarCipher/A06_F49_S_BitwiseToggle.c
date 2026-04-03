void fL7(char *vkI,  int   pE)  {

  int  Z   = (pE  %  26 + 26)   % 26;
  for(int   tavb=0; vkI[tavb]; tavb++) {
 char   Bp   =   vkI[tavb] & 32;
   char w  = vkI[tavb] & ~32;
 if(w >=   'A'   && w   <=   'Z')  {
 vkI[tavb]   =   ((w   -   'A'  +   Z)  % 26   + 'A') | Bp;
   }
 }
}