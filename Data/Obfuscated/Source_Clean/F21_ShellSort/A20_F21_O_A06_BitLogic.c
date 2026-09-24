void ze6(int *y9EM, int KT) {
    for(int iSu=KT/2;iSu>0;iSu/=2){for(int LN1=iSu;LN1<KT;LN1++){for(int ecb2=LN1;ecb2>=iSu;ecb2-=iSu){if(y9EM[ecb2-iSu]>y9EM[ecb2]){y9EM[ecb2]=y9EM[ecb2]^y9EM[ecb2-iSu];y9EM[ecb2-iSu]=y9EM[ecb2]^y9EM[ecb2-iSu];y9EM[ecb2]=y9EM[ecb2]^y9EM[ecb2-iSu];}else break;}}}
}