void  mdNu(char   **W,   int D2,  char  *uu)   {
 if  (D2 <= 0)  return;
  if (D2 ==   1)  { strcpy(uu, W[0]);   return;  }
   char ooA[128]   =   {0};
 mdNu(W,   D2 -   1, ooA);
 int N   =   -1;
 while   (ooA[++N] !=   '\0'   &&  W[D2-1][N]  ==   ooA[N]) uu[N] =  ooA[N];
  uu[N] = '\0';
}