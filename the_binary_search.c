#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("                   ========================= \n");
    printf("                   | Binary search program |\n");
    printf("                   ========================= \n");
    printf("\n");
//write content Array
    int taille;
    printf("- Enter the number of elements in the array: ");
    scanf("%d", &taille);

    int arr[taille];
    printf("Enter %d integers:\n", taille);
    for (int i = 0; i < taille; i++) {
        printf("Enter the value %d: ",i+1);
        scanf("%d", &arr[i]);
    }

//Array order

    int i, j, min, tem;

    for (i = 0; i < taille; i++) {
        min = i;
        for (j = i + 1; j < taille; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        tem = arr[i];
        arr[i] = arr[min];
        arr[min] = tem;
    }
    printf("Arrange numbers from smallest to largest :");
    for (i = 0; i < taille; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

//The item you want

    int x;
    printf("I rechr the number : ");
    scanf("%d",&x);

//The number of values searched

int count = 0;
int posall[taille];

for (int i = 0; i < taille; i++) {
    if (arr[i] == x) {
        posall[count] = i;
        count++;
    }
}

//Does the number exist or not?

if (count == 0) {
    printf("the number %d is not here\n", x);
    printf("Number of values found: %d\n", count);
}else {
    printf("the number %d is here\n", x);
    printf("Number of values found: %d\n", count);
    printf("Positions of the number %d: ", x);
    for (int i = 0; i < count; i++) {
        printf("%d ", posall[i]+1);
    }
    printf("\n");
}
    getch();
    return 0;
}

// Search on the number

int rechr(int arr[], int x, int size,int taille) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
