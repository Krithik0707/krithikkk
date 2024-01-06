#include <stdio.h>
void K(int arr[][100], int n, int p) {
    int r = 0, c = n - 1;
    int count = 0;

    while (r < n && c >= 0) {
        if (arr[r][c] == p) {
            printf("Element %d found at position (%d, %d)\n", p, r, c);
            return;
        }else{
        printf("elemernts not found");
        }


    printf("Element %d not found in the sequence\n", p);
}
int main() {
    int n;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
// 2D array
    int arr[100][100];
// string of elements in the 2- d arrayy
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int p;
    printf("Enter the value of p: ");
    scanf("%d", &p);
//function call k
    K(arr, n, p);

    return 0;
}}

