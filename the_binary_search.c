#include <stdio.h>
#include <stdlib.h>



int main(){
//write content Array
    int taille;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &taille);

    int arr[taille];


    printf("Enter %d integers:\n", taille);
    for (int i = 0; i < taille; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("I rechr the number : ");
    scanf("%d",&x);

    /*int taille = 8;
      int arr[] = {-5,2,4,5,7,9,10,12};*/

//Does the number exist or not?

    int pos = rechr(arr,x,taille);
    if(pos == -1)
        printf("the number %d it's not here",x);
    else
        printf("the number %d it's here",x);
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
