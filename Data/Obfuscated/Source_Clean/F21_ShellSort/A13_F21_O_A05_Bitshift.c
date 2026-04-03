void   Hi0(int *gB, int YE2)  {
   for(int   J0=YE2>>1;J0>0;J0>>=1){for(int   *E3=gB+J0;E3<gB+YE2;E3++){int D=*E3,*X=E3;while(X>=gB+J0&&*(X-J0)>D){*X=*(X-J0);X-=J0;}*X=D;}}
}