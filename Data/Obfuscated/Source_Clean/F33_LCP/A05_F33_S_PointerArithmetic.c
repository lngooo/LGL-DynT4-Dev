void AuOe(char **D,   int OWJ2,  char *HQIU8) {
 if  (OWJ2   <=  0) return;
   for (int   oHtp   =  0;  ;  oHtp++)   {
   char OCi9 = *(D[0]   +  oHtp);
 if  (OCi9 ==  '\0')   {   *(HQIU8 +   oHtp) = '\0';  break;  }
   int   GWj  =  1;
   for  (int   IwqN   = 1;   IwqN  < OWJ2; IwqN++) {
  if (*(D[IwqN]   +   oHtp)  != OCi9) { GWj   = 0;  break; }
  }
  if  (!GWj) { *(HQIU8   +   oHtp) = '\0';  break;  }
 *(HQIU8  +  oHtp) =  OCi9;
  }
}