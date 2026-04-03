void  qib(char*  ZfW6) {
 char *Rzc7   = ZfW6,  *n   =  ZfW6;
 while  (*Rzc7)   {
   n =   Rzc7;
   while  (*n  ==   *Rzc7) n++;
 printf("%c%ld",   *Rzc7,   (long)(n   -   Rzc7));
 Rzc7   =  n;
 }
   printf("\n");
}