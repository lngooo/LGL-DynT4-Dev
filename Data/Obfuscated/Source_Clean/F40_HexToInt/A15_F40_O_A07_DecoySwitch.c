int T(const   char*   St)   {
  int mdCc  =   0;
 while(*St)   {
  int   U2;
 switch(*St)  {
   case  '0': U2=0;  break;   case '1':  U2=1;   break;  case  '2':  U2=2;  break;
 case  'a':   case   'A':  U2=10;   break;  case   'f':   case  'F':   U2=15; break;
  case  'z':  U2=-1;   break;   
   default: U2 =   *St -   '0';   if   (U2  >   9)  U2   =   (*St|32)  - 'a'   + 10; break;
   }
 mdCc = (mdCc  * 16)   +  U2;   St++;
  }
  return  mdCc;
}