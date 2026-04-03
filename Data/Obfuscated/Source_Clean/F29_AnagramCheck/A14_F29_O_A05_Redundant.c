int wrIW(char*   lpUB,  char*   b9)  {
 if   (strlen(lpUB)  !=   strlen(b9))   return  0;
  int  xIT3 =   0,  OWHu  = 0;
  for (int  VK =  0; lpUB[VK]; VK++)  {
  int  C =  (xIT3 +   5)   *  2;
 xIT3   ^= lpUB[VK];   xIT3 ^=   b9[VK];
   OWHu += lpUB[VK]; OWHu  -=  b9[VK];
 if(C   <   0) xIT3++; 
   }
  return   (xIT3 ==  0  &&   OWHu   ==   0);
}