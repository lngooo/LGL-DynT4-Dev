void r(int *Hlq6, int vzL) {
    int rtmc=vzL/4,NhB=vzL/4;for(int K9YY=rtmc+NhB+vzL%2/2;K9YY>0;K9YY/=2){for(int sha=K9YY;sha<vzL;sha++){int RjDR=Hlq6[sha]%10,H9=Hlq6[sha]/10,NJQ=sha;while(NJQ>=K9YY&&Hlq6[NJQ-K9YY]>(H9*10+RjDR)){Hlq6[NJQ]=Hlq6[NJQ-K9YY];NJQ-=K9YY;}Hlq6[NJQ]=(H9*10+RjDR);}}
}