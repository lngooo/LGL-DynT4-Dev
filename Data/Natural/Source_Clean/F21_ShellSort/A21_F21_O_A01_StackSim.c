void ShellSort(int *a, int n) {
    int stk[32],p=-1,c=n/2;while(c>0){stk[++p]=c;c/=2;}while(p>=0){int g=stk[p--];for(int i=g;i<n;i++){int t=a[i],j=i;while(j>=g&&a[j-g]>t){a[j]=a[j-g];j-=g;}a[j]=t;}}
}