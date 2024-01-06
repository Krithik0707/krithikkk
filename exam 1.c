#include <stdio.h>

int main() {
    int a, i, pos;
// a is the size of the element
    printf("Enter the size of the array: ");
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++) {
            // print it like element 1,element 2 etc untill the user has inputed
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // printing of the arrayy
    for (i = 0; i < a; i++){
        printf("The elemts are %d \n:",arr[i]);
    }
    // takes the posintion of the element to be deleted from the user and stores it in pos
    printf("Enter the position to delete (1 to %d): ",a);
    scanf("%d", &pos);
// checking if the user entered position can be deleted or no
  if (pos < 1 || pos > a) {
        printf("can't delete the item\n");
        return 1;
    }
    // delteing the element from the poisition user enetered
    for (i = pos-1; i<a - 1; i++) {
        arr[i] = arr[i + 1];

    }

    for (i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }


    }


