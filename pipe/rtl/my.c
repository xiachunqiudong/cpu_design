
int arr[] = {112, 20, 5, 7, 2, 11, 50, 38, 22, 79};

void sort(int arr[], int n) {
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


void my() {
    sort(arr, 10);
}

