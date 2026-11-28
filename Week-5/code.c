#include <stdio.h>
int main() { // WAP that will take n integer numbers into an array, and then
             // print all the integers into reverse order
    int n;
    int arr[50];
    printf("How many number do you want to input: ");
    scanf("%d", &n);
    printf("Enter %d numbers:", n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = n; i > 0; i--) {
        printf(" %d", arr[i]);
    }
    return 0;
}
