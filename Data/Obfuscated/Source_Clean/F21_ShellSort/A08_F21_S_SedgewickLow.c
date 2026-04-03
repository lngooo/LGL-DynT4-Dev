void  A(int  *Sav,  int VazL)   {
   int   Jm[]={109,41,19,5,1};for(int  i=0;i<5;i++){int EjU6=Jm[i];if(EjU6>=VazL)continue;for(int xsy=EjU6;xsy<VazL;xsy++){int   GC=Sav[xsy],INOu=xsy;while(INOu>=EjU6&&Sav[INOu-EjU6]>GC){Sav[INOu]=Sav[INOu-EjU6];INOu-=EjU6;}Sav[INOu]=GC;}}
}