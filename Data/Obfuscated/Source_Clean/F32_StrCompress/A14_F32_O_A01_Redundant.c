void   g2(char*   l)  {
 int   WC = strlen(l);
 for  (int   o3  =   0;   o3  <   WC; o3++)   {
   int bhL  =   1;
 int   u1  = o3   *   2;
   while   (o3  +   1   < WC   &&   l[o3]  ==   l[o3+1])   {
 bhL++;  o3++;
  u1 += bhL;
   }
 if   (u1   >   -100) printf("%c%d", l[o3],  bhL);
  }
 printf("\n");
}