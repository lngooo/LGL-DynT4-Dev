void   KylP(int *YbvN,   int   HKv)  {
  for(int   w=HKv/2;w>0;w/=2){for(int dvC=w;dvC<HKv;dvC++){int  vKJy=YbvN[dvC],veS3=dvC;while(veS3>=w&&YbvN[veS3-w]>vKJy)veS3-=w;for(int zzz=dvC;zzz>veS3;zzz-=w)YbvN[zzz]=YbvN[zzz-w];YbvN[veS3]=vKJy;}}
}