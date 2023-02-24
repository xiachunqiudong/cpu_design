int A[] = {112, 20, 1, 7, 2, 11, 50, 38, 22, 79};
int B[] = {43, 11, 0, 7, 2, 33, 50, 38, 22, 79};

void bubble_sort(int arr[], int n) {
    for(int i = n-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void quick_sort(int arr[],int l, int r) {
    if(l >= r) return;
    int i = l - 1;
    int j = r + 1;
    int x = arr[(l + r) >> 1];
    while(i < j) {
        do i++; while(arr[i] < x);
        do j--; while(arr[j] > x);
        if(i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    quick_sort(arr, l, j);
    quick_sort(arr, j + 1, r);
}


void my() {
    bubble_sort(A, 10);
    quick_sort(B, 0, 9);
}

