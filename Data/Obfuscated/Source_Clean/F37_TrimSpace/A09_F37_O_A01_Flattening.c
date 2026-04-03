void  U(char* u) {
  int CUoT = 0,  GmQi   =   0, an  = 0;
   while   (an  != -1) {
 switch   (an)  {
   case 0: an   =   (u[CUoT]  ==  0) ? 3 : 1;   break;
 case   1:   if   (!isspace((unsigned  char)u[CUoT])) {   u[GmQi]   =  u[CUoT];  GmQi++;  }  an   =   2;  break;
   case  2:  CUoT++;   an  =   0;   break;
   case   3: u[GmQi]  = 0; an = -1; break;
   }
 }
}