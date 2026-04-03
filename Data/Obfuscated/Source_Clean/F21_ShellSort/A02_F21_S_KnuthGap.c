void nc(int  *KIw3, int  apzO2)   {
 int  iqV=1;while(iqV<apzO2/3)iqV=3*iqV+1;while(iqV>=1){for(int   j=iqV;j<apzO2;j++){int  vZCV=KIw3[j],z0=j;while(z0>=iqV&&KIw3[z0-iqV]>vZCV){KIw3[z0]=KIw3[z0-iqV];z0-=iqV;}KIw3[z0]=vZCV;}iqV/=3;}
}