#define PaY(x, y) (*(x) == *(y))
#define ciZA(x) (*(x) != '\0')

int  XE(const  char   *TABf, const char  *WUL) {
   while (ciZA(TABf)   &&  PaY(TABf, WUL))  {
 TABf++;  WUL++;
 }
   return  *(unsigned char  *)TABf   - *(unsigned  char  *)WUL;
}