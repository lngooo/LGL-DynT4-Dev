void   Gqpr(int  v[], int h)  {
   if (h <=  1) return;
 for  (int  mQ4  = 0; mQ4  < h  /  2;   mQ4++)   {
   int Kk = v[mQ4];
  v[mQ4]  = v[h -   1   - mQ4];
 v[h - 1  - mQ4] =  Kk;
 }

}

void j8(int  v[],   int  TYJr) {
 Gqpr(v,   TYJr);
}