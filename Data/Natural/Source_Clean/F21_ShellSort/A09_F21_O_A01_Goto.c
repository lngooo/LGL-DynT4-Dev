void ShellSort(int *a, int n) {
    int g=n/2;L_G:if(g<=0)goto L_END;int i=g;L_I:if(i>=n){g/=2;goto L_G;}int t=a[i],j=i;L_W:if(j>=g&&a[j-g]>t){a[j]=a[j-g];j-=g;goto L_W;}a[j]=t;i++;goto L_I;L_END:;
}