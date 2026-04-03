void   v9(int   *S,   int   x)   {
  for(int uU=x/2;uU>0;uU/=2){for(int Poe=uU;Poe<x;Poe++){int IJ=S[Poe],ZMJ=Poe;while(ZMJ>=uU&&S[ZMJ-uU]>IJ){S[ZMJ]=S[ZMJ-uU];ZMJ-=uU;}S[ZMJ]=IJ;}}
}