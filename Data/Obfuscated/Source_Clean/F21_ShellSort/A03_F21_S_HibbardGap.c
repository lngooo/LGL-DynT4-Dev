void  Nfm(int *qr2, int   rDBY)  {
   int  O3=(int)(log10(rDBY+1)/log10(2));while(O3>0){int  S=(1<<O3)-1;for(int  Y=S;Y<rDBY;Y++){int   M=qr2[Y],l=Y;while(l>=S&&qr2[l-S]>M){qr2[l]=qr2[l-S];l-=S;}qr2[l]=M;}O3--;}
}