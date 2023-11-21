#include <stdio.h>
#include <string.h>
//###Question 01###
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     swap(&arr[0], &arr[1]);
//     printf("Array after swapping: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }


//###Question 02###
// void reverse(char *str) {
//     int size = strlen(str);
//     char *ptr;
//     int j=size-1;
//     for (int i = 0; i < size; i++)
//     {
//         ptr = str+j;
//         printf("%c", *ptr);
//         j--;
//     }  
// }
// int main() {
//     char str[11] = "Hello World";

//     reverse(&str);
//     return 0;
//     }



//###Question 03###
// int main() {
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d", &n);
//     int *arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nEnter element [%d]: ",i);
//         scanf("%d", (arr+i));
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nElement [%d] of array: %d",i,*(arr+i));
//     }   
//     return 0;
// }


//###Question 04###
// void search(int *arr, int size_of_arr, int element) {
//     for (int i = 0; i < size_of_arr; i++)
//     {
//         if (arr[i]==element)
//         {
//             printf("Element found in position %d",i);
//             return 0;
//         }
//     }  
//     printf("***Element not found***");
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};

//     search(&arr,5,4);
//     return 0;
// }



//###Question 05###
// void add_matrix(int *mat1, int *mat2) {

//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ",(*(mat1+i)+*(mat2+i)));
            
//     }  
// }

// int main() {
//     int mat1[2][3] = {{1, 2, 3},{4,5,6}};
//     int mat2[2][3] = {{2, 4, 6},{8,10,12}};

//     add_matrix(&mat1,&mat2);
//     return 0;
// }