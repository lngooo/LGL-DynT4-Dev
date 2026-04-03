void   kmWx(char   *H, int  p) {

  int  XvX = (p  % 26 +  26)  % 26;
   for(int   yIS=0;  H[yIS];  yIS++)   {
 int  UIFU =   (H[yIS]   >=  'a'  &&  H[yIS] <= 'z')  ? 1 :   (H[yIS]   >= 'A'   &&   H[yIS]  <=   'Z' ?  2 : 0);
  switch(UIFU)  {
   case   1:  H[yIS]  =   (H[yIS]-'a'+XvX)%26+'a';   break;
   case  2: H[yIS]  =  (H[yIS]-'A'+XvX)%26+'A';   break;
  default:   break;
   }
 }
}