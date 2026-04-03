void   oCwA(int *FaNA1,   int gKq9)  {
  int FJP4=0,xx,rhD9,nRi,x;while(FJP4!=4){switch(FJP4){case 0:xx=gKq9/2;FJP4=1;break;case  1:if(xx>0){rhD9=xx;FJP4=2;}else   FJP4=4;break;case 2:if(rhD9<gKq9){x=FaNA1[rhD9];nRi=rhD9;FJP4=3;}else{xx/=2;FJP4=1;}break;case   3:while(nRi>=xx&&FaNA1[nRi-xx]>x){FaNA1[nRi]=FaNA1[nRi-xx];nRi-=xx;}FaNA1[nRi]=x;rhD9++;FJP4=2;break;}}
}