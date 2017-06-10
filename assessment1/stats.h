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

/*
 * @file Statistics header file (stats.h)
 * 
 *  This file contains functions' prototypes and documentation.
 * 
 * @author Mohammed Selim
 * @date 10 JUNE 2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Define a type of a structure of four elements including all statistics */
typedef struct { 
unsigned char minimum; 
unsigned char maximum;
unsigned char mean;
unsigned char median; 
} statistics_t;


/**
 * @brief Sorts array in descending order
 *
 * This function sorts array's elements form greater to smaller. It takes
 * a pointer to unsigned 8-bit number. It uses bubble sort algorithm
 * by swapping each element of the array in ascending order.
 * 
 * @param array The pointer to an unsigned 8-bit number to be sorted
 * @return	None
 */
void sort_array(unsigned char * ); 


/**
 * @brief Finds the maximum element in an array
 *
 * This function finds the maximum number in an array which is given
 * as an input. Function's mission will be easy after performing 
 * sorting before calling find_maximum. The maximum element resides
 * at the first array's index.
 * 
 * @param array The pointer to an unsigned 8-bit number to find maximum
 * @return The maximum number inside the array
 */
unsigned char find_maximum(unsigned char * );


/**
 * @brief Finds the minimum element in an array
 *
 * This function finds the minmum number in an array which is given
 * as an input. Function's mission will be easy after performing 
 * sorting before calling find_maximum. The minimum element resides
 * at the last array's index.
 * 
 * @param array The pointer to an unsigned 8-bit number to find minimum
 * @return The minmum number inside the array
 */
unsigned char find_minimum(unsigned char * );


/**
 * @brief Finds the median element in an array
 *
 * This function finds the maximum number in an array, which is given
 * as an input, after performing sorting process. The median element
 * resides at the middle array's index plus 1.
 * 
 * @param array The pointer to an unsigned 8-bit number to find median
 * @return The median number inside the array
 */
unsigned char find_median(unsigned char * );


/**
 * @brief Finds the mean in an array
 *
 * This function finds the mean in an array, which is given
 * as an input. It performs sum operation for all array elements
 * then divide the sum by the number of array elements.
 * 
 * @param array The pointer to an unsigned 8-bit number to find mean
 * @return The mean of the array
 */
unsigned char find_mean(unsigned char * );


/**
 * @brief Displays the statistics of an array
 *
 * This function displays the statistics of an array, which is given
 * as an input, including minimum, maximum, mean and median.
 * 
 * @param pobject The pointer to a structure of four elements
 * @return None
 */
void print_statistics(statistics_t * );


/**
 * @brief Displays the elements of an array
 *
 * This function displays the elements of an array after sorting from 
 * greater to smaller.
 *
 * @param array The pointer to a 8-bit to print elements
 * @return None
 */
void print_array(unsigned char * );




#endif /* __STATS_H__ */
