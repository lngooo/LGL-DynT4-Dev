void   Jwx(char   *E9)  {
  struct   uwrR   { int  GpmJ;   int  Yxeu;  } rh[64];
   int YD9  = 0, B = strlen(E9),  TM  =  0;
   for(int rOZx5=0;   rOZx5<=B;   rOZx5++)  {
 if(E9[rOZx5]  ==   ' '  ||  E9[rOZx5]   == 0)   {
 rh[YD9].GpmJ  =  TM;
  rh[YD9++].Yxeu  = rOZx5   -  TM;
  TM   = rOZx5 +  1;
  }
 }
 char   l[256]  = "";
  for(int  BtS=YD9-1;  BtS>=0;   BtS--) {
  strncat(l,  E9   +  rh[BtS].GpmJ,   rh[BtS].Yxeu);
 if(BtS > 0)  strcat(l,   " ");
   }
 strcpy(E9,   l);
}