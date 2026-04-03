void DK5(char   *p,   int W)  {

 int  X6   =  (W   %   26 +   26)   %  26;
 char   wr[]  =  "abcdefghijklmnopqrstuvwxyz";
 char tw9[]  = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   for(int   Hax=0;   p[Hax];  Hax++) {
   for(int   Ss9=0; Ss9<26;   Ss9++) {
   if(p[Hax]  == wr[Ss9]) {  p[Hax] =   wr[(Ss9+X6)%26];   break; }
   if(p[Hax] == tw9[Ss9])   {  p[Hax]  = tw9[(Ss9+X6)%26];  break; }
 }
   }
}