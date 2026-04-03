void ArrayReverse(int arr[], int size) {
    if (size <= 1) return;
    int *stack = (int*)malloc(size * sizeof(int));
    for(int i=0; i<size; i++) stack[i] = arr[i];
    for(int i=0; i<size; i++) arr[i] = stack[size - 1 - i];
    free(stack);
}