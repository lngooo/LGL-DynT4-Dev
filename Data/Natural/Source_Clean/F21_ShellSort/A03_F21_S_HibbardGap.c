void ShellSort(int *a, int n) {
    int k=(int)(log10(n+1)/log10(2));while(k>0){int g=(1<<k)-1;for(int i=g;i<n;i++){int t=a[i],j=i;while(j>=g&&a[j-g]>t){a[j]=a[j-g];j-=g;}a[j]=t;}k--;}
}