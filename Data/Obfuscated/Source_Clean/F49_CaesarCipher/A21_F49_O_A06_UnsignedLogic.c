void VCIy6(char   *ZLlk,   int tYj5) {

   int Y2 =   (tYj5  %  26   + 26)  % 26;
   for(int  I=0;   ZLlk[I]; I++) {
  unsigned char  BvJ = (unsigned char)ZLlk[I];
   if(BvJ  >= 97   &&   BvJ  <=  122)  ZLlk[I]  =   (char)('a' +   (BvJ -   97  +  Y2) % 26);
 else  if(BvJ  >= 65 &&  BvJ <=  90) ZLlk[I] =   (char)('A'   +   (BvJ -   65 +  Y2)  %   26);
 }
}