void   ilSV1(const  char  *uoai,   char  *HOn)   {
 int  dfiP =  0,  n   = 0;
 while   (uoai[dfiP] !=   0) {
  int MV9  =  1;
 while (uoai[dfiP +  MV9]  !=  0   &&   !(uoai[dfiP+MV9]  ^ uoai[dfiP])) MV9++;
   HOn[n++]  =  uoai[dfiP];
 n  += sprintf(HOn  + n, "%d",   MV9);
   dfiP  +=   MV9;
 }
}