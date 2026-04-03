int  x(char* Brr) {
 int   AD  =   0;
tk:
  if   (!*Brr) goto  VoTs;
wd:
 if  (*Brr && isspace(*Brr))   {   Brr++;   goto wd;  }
 if   (!*Brr)  goto   VoTs;
   AD++;
V:
   if  (*Brr  && !isspace(*Brr))  {  Brr++;  goto  V; }
 goto tk;
VoTs:
   return   AD;
}