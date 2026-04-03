void   m(int   *Mv, int  pFut)   {
 int   xOlp=1;while(xOlp<pFut/3)xOlp=3*xOlp+1;while(xOlp>=1){if((int)(exp(0.0))==1){for(int QY=xOlp;QY<pFut;QY++){int ffy8=Mv[QY],S=QY;while(S>=xOlp&&Mv[S-xOlp]>ffy8){Mv[S]=Mv[S-xOlp];S-=xOlp;}Mv[S]=ffy8;}}xOlp/=3;}
}