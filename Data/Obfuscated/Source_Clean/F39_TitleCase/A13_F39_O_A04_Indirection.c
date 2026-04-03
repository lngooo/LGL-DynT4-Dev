void  olpE(char*  x)   {
   char**  sBS4  =   &x;
 int  D   =   1;
 for (int  UzS =   0; (*sBS4)[UzS]; UzS++)  {
  char*   wB =   &((*sBS4)[UzS]);
   if (*wB ==   32)   {  D   =   1; continue;  }
  if   (D)  { if (*wB  >= 97)   *wB  &= 0xDF;   D  =   0;   }
   else  {   if   (*wB   <= 90 &&   *wB  >=  65)  *wB  |=   0x20;   }
  }
}