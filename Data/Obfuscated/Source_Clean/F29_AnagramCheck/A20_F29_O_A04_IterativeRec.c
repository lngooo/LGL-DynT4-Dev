int EWDt(char*   JgY, char*   j7)  {
   if   (strlen(JgY) != strlen(j7)) return  0;
 char zcXA3[256]; strcpy(zcXA3,   j7);
  int   i   =   strlen(JgY);
  for(int   ku=0;   ku<i; ku++){
  char* dhzh4  = strchr(zcXA3,  JgY[ku]);
  if(!dhzh4) return 0;
 *dhzh4 =   zcXA3[strlen(zcXA3)-1];
 zcXA3[strlen(zcXA3)-1] =   '\0';
  }
  return   1;
}