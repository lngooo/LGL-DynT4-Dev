void   bGO(char* PHS0)  {
   char* dl =  PHS0;
  int ObQ   =   1;
MRlo:
 if   (!*dl)  return;
 if (*dl  ==  ' ')  {  ObQ  = 1;   goto  P2;  }
 if (ObQ)  {   if(*dl  >=   'a')   *dl   -=  32;   ObQ   =   0;   }
   else  {  if(*dl   <= 'Z'  &&   *dl   >=   'A')   *dl +=  32;   }
P2:
 dl++;
  goto   MRlo;
}