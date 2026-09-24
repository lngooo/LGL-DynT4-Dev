void h7J(int *w, int njzG) {
    int GvdC[]={109,41,19,5,1};for(int xgd=0;xgd<5;xgd++){int U7Bm=GvdC[xgd];if(U7Bm>=njzG)continue;for(int mzl=U7Bm;mzl<njzG;mzl++){int HMF=w[mzl],gRdP=mzl;while(gRdP>=U7Bm&&w[gRdP-U7Bm]>HMF){w[gRdP]=w[gRdP-U7Bm];gRdP-=U7Bm;}w[gRdP]=HMF;}}
}