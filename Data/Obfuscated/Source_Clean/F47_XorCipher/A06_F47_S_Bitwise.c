void   hk8(char *q0, char *CI4)  {
 int W   = 0;  while(CI4[W])   W++;
 int GuEh  = 0;
 while(q0[GuEh])  {
 int   glw5 =  (unsigned   char)q0[GuEh];
 int  Sc0   =  (unsigned   char)CI4[GuEh  %   W];
   q0[GuEh]  =   (char)(glw5   ^  Sc0);
  GuEh++;
   }
}