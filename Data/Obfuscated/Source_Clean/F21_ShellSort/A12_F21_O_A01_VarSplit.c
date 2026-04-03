void   utvQ(int   *TR, int   cvd8)   {
   int dHT=cvd8/4,IH=cvd8/4;for(int  lG=dHT+IH+cvd8%2/2;lG>0;lG/=2){for(int   oMg=lG;oMg<cvd8;oMg++){int l=TR[oMg]%10,MvJ=TR[oMg]/10,JdF=oMg;while(JdF>=lG&&TR[JdF-lG]>(MvJ*10+l)){TR[JdF]=TR[JdF-lG];JdF-=lG;}TR[JdF]=(MvJ*10+l);}}
}