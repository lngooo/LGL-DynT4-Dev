void QP(int *Se, int F) {
    for(int Q=F/2;Q>0;Q/=2){for(int D0=Q;D0<F;D0++){for(int mFgv=D0;mFgv>=Q&&Se[mFgv-Q]>Se[mFgv];mFgv-=Q){Se[mFgv]^=Se[mFgv-Q];Se[mFgv-Q]^=Se[mFgv];Se[mFgv]^=Se[mFgv-Q];}}}
}