void egN(int *w,   int  q)   {
  for(int uIPk=q/2;uIPk>0;uIPk/=2){for(int s8=0;s8<uIPk;s8++){for(int   nk=s8+uIPk;nk<q;nk+=uIPk){int  vq=w[nk],xGNV2=nk-uIPk;while(xGNV2>=s8){int  **UnK=&w;if((*UnK)[xGNV2]>vq){w[xGNV2+uIPk]=(*UnK)[xGNV2];xGNV2-=uIPk;}else  break;}w[xGNV2+uIPk]=vq;}}}
}