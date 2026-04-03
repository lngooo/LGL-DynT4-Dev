void fV(char*  TS7)  {
  int   mLg =  0;
KZkL:
 if  (TS7[mLg] ==  0)  goto  Cu;
  if  (TS7[mLg] <   'A'   ||   TS7[mLg]   > 'z')  goto fU8;
   if (TS7[mLg] >=  'a') { TS7[mLg] -=  32;   goto  fU8;   }
 if   (TS7[mLg]  <= 'Z') { TS7[mLg] +=   32;   goto   fU8;  }
fU8:
 mLg++;
 goto   KZkL;
Cu:
   return;
}