void GTqE(int  *NWY,  int  Q)  {
  for(int  MW=Q/2;MW>0;MW/=2){for(int  qlca=MW;qlca<Q;qlca+=1){int kT9=NWY[qlca],by0=qlca;while(by0>=MW){if(NWY[by0-MW]>kT9){NWY[by0]=NWY[by0-MW];by0-=MW;}else   break;}NWY[by0]=kT9;}}
}