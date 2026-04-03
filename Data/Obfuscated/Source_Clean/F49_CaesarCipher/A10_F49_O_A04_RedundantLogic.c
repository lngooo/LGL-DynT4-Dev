void   Xurs4(char   *EXJL7,   int T8)  {

 int   BezX  =   (T8   %  26 +   26) % 26;
   for(int   kFLk3=0; EXJL7[kFLk3];  kFLk3++) {
   int goi5  = EXJL7[kFLk3];
   int pmo   = (goi5   >=   'a'  &&  goi5   <=   'z');
 int  mAfC6  =  (goi5   >=   'A'   &&   goi5   <= 'Z');
  if(pmo)   EXJL7[kFLk3]   =   (char)('a'   +   (goi5 -   'a'  +   BezX)   %  26);
 if(mAfC6)  EXJL7[kFLk3] =   (char)('A'  +   (goi5 -  'A' + BezX)   %  26);
  if(!pmo  &&  !mAfC6)  EXJL7[kFLk3]  = EXJL7[kFLk3];
 }
}