void  TF(int  *IU0,  int   pXd3) {
  int   ZLr=pXd3/2;EtcK:if(ZLr<=0)goto A;int   V=ZLr;nfPu:if(V>=pXd3){ZLr/=2;goto   EtcK;}int  uOS=IU0[V],Wc=V;o0:if(Wc>=ZLr&&IU0[Wc-ZLr]>uOS){IU0[Wc]=IU0[Wc-ZLr];Wc-=ZLr;goto o0;}IU0[Wc]=uOS;V++;goto nfPu;A:;
}