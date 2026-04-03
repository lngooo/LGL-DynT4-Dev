void   WFI(char  *ZOa) {
   int mR5  = 0,  JFm, uxE9  =   strlen(ZOa),  q;  char  k[256]   =   "";
   while(mR5 != 99) {
  switch(mR5)  {
 case  0:  q   =   uxE9;  JFm =   uxE9  -   1;   mR5  = 1;   break;
   case  1:   mR5  =  (JFm >=  -1)   ?  2 :   4; break;
   case 2:  if(JFm  ==   -1 ||  ZOa[JFm] == ' ')   {
  strncat(k,  ZOa  + JFm   +  1,   q   - JFm  - 1);
  if(JFm !=   -1)   strcat(k,  " ");
  q   =  JFm;
 }
  mR5  = 3; break;
  case  3: JFm--;   mR5 =   1; break;
 case   4:   strcpy(ZOa, k);   mR5 =   99;   break;
   }
  }
}