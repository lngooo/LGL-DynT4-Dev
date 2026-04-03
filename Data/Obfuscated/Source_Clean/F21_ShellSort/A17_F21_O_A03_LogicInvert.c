void  a(int  *Y,  int  ZUYV5)   {
   int   Wz=(int)(log10(ZUYV5+1)/log10(2));while(Wz>0){int   faNW=(1<<Wz)-1;for(int   oZRf=faNW;oZRf<ZUYV5;oZRf++){int  sF=Y[oZRf],jyY=oZRf;while(!(jyY<faNW   ||  Y[jyY-faNW]<=sF)){Y[jyY]=Y[jyY-faNW];jyY-=faNW;}Y[jyY]=sF;}Wz--;}
}