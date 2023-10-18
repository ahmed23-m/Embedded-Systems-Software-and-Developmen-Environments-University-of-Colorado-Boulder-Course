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
 * @file < stats.h >
 * @brief < Declarations for stats.c >
 *
 * < Declarations for a simple application that performs statistical analytics
    Using C Language >
 *
 * @author Ahmed Adel
 * @date 18/10/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief < Prints the Statistics of an array >
 *
 * < This function takes the resulting statistics done on an array
    [minimum, maximum, mean and median] And Prints Those Values >
 *
 * @param minimum   < The minimum number of the given array >
 * @param maximum   < The maximum number of the given array >
 * @param mean      < The mean of the given array >
 * @param median    < The median of the given array >
 *
 * @return void
 */
void print_statistics(unsigned char minimum, unsigned char maximum, float mean, unsigned char median);



/**
 * @brief < Prints the Elements of an array >
 *
 * < This Function Takes Pointer to the array and number of elements And Print its elements >
 *
 * @param arr < Pointer to the array >
 * @param Num < Number Of array Elements >
 *
 * @return void
 */
void print_array(unsigned char *arr,unsigned int Num);



/**
 * @brief < Find The Median of an array >
 *
 * < This Function Takes Pointer to the array and number of elements And Find its Median >
 *
 * @param arr       < Pointer to the array >
 * @param Num       < Number Of array Elements >
 *
 * @return Median   < The Median of The array >
 */
unsigned char find_median(unsigned char *arr,unsigned int Num);



/**
 * @brief < Find The Mean of an array >
 *
 * < This Function Takes Pointer to the array and number of elements And Find its Mean >
 *
 * @param arr       < Pointer to the array >
 * @param Num       < Number Of array Elements >
 *
 * @return Mean     < The Mean of The array >
 */
float find_mean(unsigned char *arr,unsigned int Num);



/**
 * @brief < Find The Maximum of an array >
 *
 * < This Function Takes Pointer to the array and number of elements And Find its Maximum Element >
 *
 * @param arr       < Pointer to the array >
 * @param Num       < Number Of array Elements >
 *
 * @return Maximum  < The Maximum of The array >
 */
unsigned char find_maximum(unsigned char *arr,unsigned int Num);



/**
 * @brief < Find The Minimum of an array >
 *
 * < This Function Takes Pointer to the array and number of elements And Find its Minimum Element >
 *
 * @param arr       < Pointer to the array >
 * @param Num       < Number Of array Elements >
 *
 * @return Minimum  < The Minimum of The array >
 */
unsigned char find_minimum(unsigned char *arr,unsigned int Num);



/**
 * @brief < Sorting Array Elements in Desc Order>
 *
 * < This Function Takes Pointer to the array and number of elements And Sorting Those in Descending Order >
 *
 * @param arr       < Pointer to the array >
 * @param Num       < Number Of array Elements >
 *
 * @return void
 */
void sort_array(unsigned char *arr,unsigned int Num);
#endif /* __STATS_H__ */
