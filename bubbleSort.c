#include<stdio.h>

void swap(float * a, float * b) //This function takes 2 float addresses and interchanges the values of the addresses.
{
    float temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(float array[], int size) //This funciton take a float array and it's size and prints each element to 2nd decimal point.
{
    for (int i = 0; i < size; i++)
    {
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

void bubbleSort(float * array, int size) // The sorting function to be tested.
{
    for(int i = 0; i < size; i ++) // Loop the function
    {
        for(int j = 0; j < size - i - 1; j ++) // Loop thte swap function call
        {
            if(array[j] > array[j+1]) // check if swap needs to be called
            {
                swap(&array[j], &array[j+1]); // call swap
            }
        }
    }
}


int main(){
    printf("Enter the size of array : ");
    int size;
    scanf("%d", &size);
    float array[size];
    printf("Enter %d element(s) : ",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%f",&array[i]);
    }
    printf("Entered Array :\n");
    printArray(array, size);
    bubbleSort(array, size);
    printf("Sorted Array :\n");
    printArray(array, size);
}
