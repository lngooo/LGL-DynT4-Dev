struct  Uz {  long   WWC;  long   XIdm7;  };

int  Pc7(int  S5)  {
   if   (S5 <   0) return -1;
 struct  Uz   NHoh   =   {   (long)S5, (long)S5   };
  if   (S5 >=   2) {
 long  Xww0  = (NHoh.WWC  +   NHoh.XIdm7 /   NHoh.WWC)  >>   1;
   while   (Xww0 <   NHoh.WWC)  {
   NHoh.WWC   = Xww0;
 Xww0 =  (NHoh.WWC + NHoh.XIdm7   /  NHoh.WWC) >>   1;
 }
  }
 return   (int)NHoh.WWC;
}