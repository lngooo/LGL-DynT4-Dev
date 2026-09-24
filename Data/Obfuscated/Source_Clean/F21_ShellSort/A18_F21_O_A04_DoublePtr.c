void Iq(int *QNhB, int Ob) {
    for(int j0=Ob/2;j0>0;j0/=2){for(int kG=0;kG<j0;kG++){for(int EE=kG+j0;EE<Ob;EE+=j0){int sQg=QNhB[EE],xQrz=EE-j0;while(xQrz>=kG){int **SZgD=&QNhB;if((*SZgD)[xQrz]>sQg){QNhB[xQrz+j0]=(*SZgD)[xQrz];xQrz-=j0;}else break;}QNhB[xQrz+j0]=sQg;}}}
}