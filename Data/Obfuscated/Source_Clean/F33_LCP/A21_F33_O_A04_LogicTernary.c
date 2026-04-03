void  FNZC(char **Pym7, int cf,   char   *AsUi)  {
 int   m4   =  128;
  for(int  Tc5=0; Tc5<cf;  Tc5++) {  int tJHc   = strlen(Pym7[Tc5]); m4  = (tJHc <   m4)   ?  tJHc  :  m4;   }
   int Xq7  =  0;
  for(int   Y=0;  Y<m4;  Y++)   {
  char gPxC   =   Pym7[0][Y];
   int yW   =   1;
  for(int  h=1; h<cf;  h++)  yW = (Pym7[h][Y]  ==  gPxC)  ?  yW :  0;
 if(yW)  { AsUi[Y]   = gPxC;  Xq7++; }  else break;
 }
   AsUi[Xq7]  =  '\0';
}