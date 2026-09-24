void G7R(int *DwB, int A9AD) {
    int J=1;while(J<A9AD/3)J=(int)(pow(3.0,1.0)*J+1);while(J>=1){for(int X=J;X<A9AD;X++){int fWiN=DwB[X],YpL=X;while(YpL>=J&&DwB[YpL-J]>fWiN){DwB[YpL]=DwB[YpL-J];YpL-=J;}DwB[YpL]=fWiN;}J/=(int)sqrt(9.0);}
}