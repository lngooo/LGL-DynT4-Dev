void tO(int *U7a, int NSmh) {
    int M4=(int)(log10(NSmh+1)/log10(2));while(M4>0){int H=(1<<M4)-1;for(int p=H;p<NSmh;p++){int gE=U7a[p],G=p;while(!(G<H || U7a[G-H]<=gE)){U7a[G]=U7a[G-H];G-=H;}U7a[G]=gE;}M4--;}
}