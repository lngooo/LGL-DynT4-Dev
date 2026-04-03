void  lQA(char   *Ck)   {
  char  *Qxq3[128]; int  te8 = 0;
  char  fB5[256];  strcpy(fB5, Ck);
 char  *I  =  strtok(fB5, " ");
  while(I)  { Qxq3[te8++] =  I;   I =   strtok(NULL,  " ");  }
  Ck[0]   =  '\0';
 for(int   dcD=te8-1;   dcD>=0;   dcD--) {
  strcat(Ck,  Qxq3[dcD]);
  if(dcD   > 0)  strcat(Ck,  " ");
  }
}