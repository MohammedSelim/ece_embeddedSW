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
 * @file Statistics implementation file (stats.c)
 *
 * This file contains all functions implementation
 *
 * @author Mohammed Selim
 * @date 10 JUNE 2017
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* Index of maximum and mimimum elements */
#define DESCENDING_ORDER_MAX (0) 
#define DESCENDING_ORDER_MIN (SIZE - 1)

void main() {

  unsigned char array[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Create a structure of 4 elements to store 
   * minimum, maximum, mean and median inside */
  statistics_t object;
  
  /* Sort array element first to ease the
   * statistics of an  the array to find */
  sort_array(array);

  /* Call statistics functions */
  object.minimum = find_minimum(array);
  object.maximum = find_maximum(array);
  object.mean    = find_mean(array);
  object.median  = find_median(array);

  /* Display minimum, maximum, mean and median */
  print_statistics(&object);

  /* Display array's elements in ascending order */
  print_array(array);

}




/* Functions implementation */

void sort_array(unsigned char *array)
{
    unsigned int out_idx, inner_idx;
    unsigned char temp;

    for (out_idx = 0; out_idx < SIZE - 1; out_idx++)
    {
        for (inner_idx = 0; inner_idx < SIZE - out_idx - 1; inner_idx++)
        {
            if (array[inner_idx + 1] > array[inner_idx])
            {
                temp = array[inner_idx + 1];
                array[inner_idx + 1] = array[inner_idx];
                array[inner_idx] = temp;
            }
        }
    }

}



unsigned char find_maximum(unsigned char *array)
{
    return array[DESCENDING_ORDER_MAX];
}



unsigned char find_minimum(unsigned char *array)
{
    return array[DESCENDING_ORDER_MIN];
}



unsigned char find_median(unsigned char *array)
{
    return array[SIZE / 2];
}



unsigned char find_mean(unsigned char *array)
{
    unsigned int sum = 0;
    unsigned int idx;

    for (idx = 0; idx < SIZE; idx++)
    {
        sum += array[idx];
    }

    return (sum / SIZE);
}



void print_statistics(statistics_t *pobject)
{
    printf("Statistics of the array :\n");
    printf("Minimum\t%d\nMaximum\t%d\n", pobject -> minimum, pobject -> maximum);
    printf("Mean\t%d\nMedian\t%d\n", pobject -> mean, pobject -> median);
}



void print_array(unsigned char *array)
{
    unsigned int idx;

    printf("\n\nDisplay array's elements after sorting process:\n");
    for (idx = 0; idx < SIZE; idx++)
    {
        printf("Array's element #%d\t%d\n",(idx), array[idx]);
    }

}

