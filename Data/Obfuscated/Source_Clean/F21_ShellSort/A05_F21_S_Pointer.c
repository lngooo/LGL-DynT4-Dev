void t(int *SNY, int rSk7) {
    for(int LD=rSk7/2;LD>0;LD/=2){for(int *jWL=SNY+LD;jWL<SNY+rSk7;jWL++){int OCQh=*jWL,*KE=jWL;while(KE>=SNY+LD&&*(KE-LD)>OCQh){*KE=*(KE-LD);KE-=LD;}*KE=OCQh;}}
}