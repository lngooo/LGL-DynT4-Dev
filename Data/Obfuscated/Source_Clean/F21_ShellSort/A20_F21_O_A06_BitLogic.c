void  kRa(int *ozVn,  int   I8)  {
   for(int  iH=I8/2;iH>0;iH/=2){for(int RFN=iH;RFN<I8;RFN++){for(int   bKm=RFN;bKm>=iH;bKm-=iH){if(ozVn[bKm-iH]>ozVn[bKm]){ozVn[bKm]=ozVn[bKm]^ozVn[bKm-iH];ozVn[bKm-iH]=ozVn[bKm]^ozVn[bKm-iH];ozVn[bKm]=ozVn[bKm]^ozVn[bKm-iH];}else break;}}}
}