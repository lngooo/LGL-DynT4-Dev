int R6(char*  x1) {
 int   E =  0,  vj;
 char yMi[256];
   while  (sscanf(x1,   "%255s%n",  yMi, &vj)   ==  1)  {
   E++;
   x1  +=  vj;
 }
   return  E;
}