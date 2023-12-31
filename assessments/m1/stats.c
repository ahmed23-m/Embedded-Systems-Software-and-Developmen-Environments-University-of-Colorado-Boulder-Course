/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file < stats.c >
 * @brief < simple application that performs statistical analytics>
 *
 * < simple application that performs statistical analytics
    Using C Language >
 *
 * @author Ahmed Adel
 * @date 18/10/2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

    print_array(test,SIZE);

    printf("Maximum = %d\n",find_maximum(test,SIZE));
    printf("Minimum = %d\n",find_minimum(test,SIZE));

    sort_array(test,SIZE);
    print_array(test,SIZE);

    printf("Median = %d\n",find_median(test,SIZE));
    printf("Mean = %d\n",find_mean(test,SIZE));

    print_statistics(find_minimum(test,SIZE),find_maximum(test,SIZE),find_mean(test,SIZE),find_median(test,SIZE));
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char minimum, unsigned char maximum, float mean, unsigned char median)
{
    printf("####{ Array Statistics }####\n");
    printf("Maximum = %d\n",maximum);
    printf("Minimum = %d\n",minimum);
    printf("Median = %d\n",median);
    printf("Mean = %f\n",mean);
}

void print_array(unsigned char *arr,unsigned int Num)
{
    printf("[ ");
    for(int i=0; i<Num; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf(" ]\n");
}

unsigned char find_median(unsigned char *arr,unsigned int Num)
{
    return arr[(Num/2)-1];
}

float find_mean(unsigned char *arr,unsigned int Num)
{
    int i = 0;
    unsigned int Sum = 0;
    while(i!=Num)
    {
        Sum+=arr[i];
        i++;
    }
    return ((float)(Sum/Num));
}

unsigned char find_maximum(unsigned char *arr,unsigned int Num)
{
    unsigned char max = arr[0];
    for(int i=0; i<Num; i++)
    {
        max = (arr[i] > max) ? arr[i] : max;
    }
    return max;
}

unsigned char find_minimum(unsigned char *arr,unsigned int Num)
{
    unsigned char min = arr[0];
    for(int i=0; i<Num; i++)
    {
        min = (arr[i] < min) ? arr[i] : min;
    }
    return min;
}

void sort_array(unsigned char *arr,unsigned int Num)
{
    int Swap = 0;
    unsigned char temp;

    do
    {
        Swap = 0;
        for(int i=0;i<Num;i++)
        {
            if(arr[i] < arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                Swap = 1;
            }
        }

    }while(Swap);
}
