void  IZmT(char   *FC,   int  fU) {

 int DqEC  =   0,  Rb8   =  0,  MnL =   (fU  %   26 +  26)   %   26;
 while   (DqEC   !=   4)   {
 switch (DqEC)   {
 case 0:   if (FC[Rb8])   DqEC =  1; else  DqEC   = 4;   break;
  case   1:   if (FC[Rb8]>='a'&&FC[Rb8]<='z') FC[Rb8]=(FC[Rb8]-'a'+MnL)%26+'a';   DqEC=2; break;
 case 2:  if   (FC[Rb8]>='A'&&FC[Rb8]<='Z') FC[Rb8]=(FC[Rb8]-'A'+MnL)%26+'A';  DqEC=3;   break;
  case 3:  Rb8++;  DqEC = 0;   break;
   }
   }
}