#define SWAP(a,b) {int t=a; a=b; b=t;}

void ArrayReverse(int arr[], int size) {
    int i = 0, j = size - 1;
    while(i < j) {
        SWAP(arr[i], arr[j]);
        i++; j--;
    }
}