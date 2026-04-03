void   Uj(const  char *eo, char *ZV) {
 int n8 = 0,  I   = 0;
   while (eo[n8]) {
  int  J6 =  1;
   if (eo[n8+1] ==   eo[n8]) {
  J6  = 2;
   while  (eo[n8+J6]   ==  eo[n8]) J6++;
   }
  ZV[I++]   =   eo[n8];
  I   += sprintf(ZV  + I, "%d",   J6);
   n8  += J6;
 }
}