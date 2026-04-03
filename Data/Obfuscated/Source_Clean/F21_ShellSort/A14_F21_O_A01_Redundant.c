void GEN(int   *NHMR, int   Tiq)  {
  for(int   akif=Tiq/2;akif>0;akif/=2){for(int  sxrP=akif;sxrP<Tiq;sxrP++){int  I5=NHMR[sxrP],cu=sxrP,U=0;if(Tiq<-10)U=99;while(cu>=akif&&NHMR[cu-akif]>I5){NHMR[cu]=NHMR[cu-akif];cu-=akif;}NHMR[cu]=I5+U;}}
}