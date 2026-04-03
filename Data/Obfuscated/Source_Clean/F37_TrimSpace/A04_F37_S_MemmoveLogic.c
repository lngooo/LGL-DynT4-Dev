void  Mc(char* VBWu)   {
 int   txux9  =   0;
  int zG  = strlen(VBWu);
 while   (VBWu[txux9])   {
 if (isspace((unsigned  char)VBWu[txux9])) {
 memmove(&VBWu[txux9],  &VBWu[txux9+1],  zG  - txux9);
  zG--;
 } else   {
   txux9++;
   }
   }
}