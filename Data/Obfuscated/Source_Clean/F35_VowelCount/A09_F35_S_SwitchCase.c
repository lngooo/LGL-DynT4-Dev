int   Gs(const   char*  R3)  {
 int   J = 0;
  for (int cL   = 0;  R3[cL]; cL++) {
   switch (R3[cL])  {
 case 'a':  case  'e': case  'i':  case   'o': case 'u':
   case   'A':   case 'E': case 'I': case  'O':  case  'U':
 J++;
   break;
 default:   break;
 }
   }
   return J;
}