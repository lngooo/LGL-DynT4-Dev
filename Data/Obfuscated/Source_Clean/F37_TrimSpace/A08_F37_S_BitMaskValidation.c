void   Tkk(char*  jO)  {
  int   kar = 0;
   for   (int   ma   = 0; jO[ma]; ma++)   {
  unsigned   char   m7   = jO[ma];

 int  ManH   =   (m7 ==   32) ||  (m7   >=  9   &&  m7 <=  13);
 if (!ManH)   {
 jO[kar++]   =   jO[ma];
 }
 }
 jO[kar]   =  '\0';
}