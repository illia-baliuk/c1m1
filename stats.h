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

 * @file stats.h

 * @brief Headers for statistics

 *

 * This file declares the prototypes of all functions

 * that calculate matrix attributes.

 *

 * @author Illia Baliuk

 * @date 03/19/2023

 *

 */



#ifndef __STATS_H__

#define __STATS_H__





/**

 * @brief Prints out the statistics of an array

 *

 * A function that prints the statistics of an array

 * including minimum, maximum, mean, and median

 *

 * @param pArray The pointer to unsigned 8-bit array

 * @param size The size of array

 */

void print_statistics(unsigned char* pArray, unsigned int size);





/**

 * @brief Prints out the array

 *

 * Given an array of data and a length, print the array to the screen.

 *

 * @param pArray The pointer to unsigned 8-bit array

 * @param size The size of array

 */

void print_array(unsigned char* pArray, unsigned int size);





/**

 * @brief Calculate the median of the array

 *

 * Given an array of data and a length, returns the median value

 *

 * @param pArray The pointer to unsigned 8-bit array

 * @param size The size of array

 *

 * @return The unsigned 8-bit median of the array

 */

unsigned char find_median(unsigned char* pArray, unsigned int size);





/**

 * @brief Calculate the mean of the array

 *

 * Given an array of data and a length, returns the mean

 *

 * @param pArray The pointer to unsigned 8-bit array

 * @param size The size of array

 *

 * @return The unsigned 8-bit mean of the array

 */

unsigned char find_mean(unsigned char* pArray, unsigned int size);





/**

 * @brief Find the maximum of the array

 *

 * Given an array of data and a length, returns the maximum

 *

 * @param pArray The pointer to unsigned 8-bit array

 * @param size The size of array

 *

 * @return The unsigned 8-bit maximum of the array

 */

unsigned char find_maximum(unsigned char* pArray, unsigned int size);





/**

 * @brief Find the minimum of the array

 *

 * Given an array of data and a length, returns the minimum

 *

 * @param pArray The pointer to unsigned 8-bit array

 * @param size The size of array

 *

 * @return The unsigned 8-bit minimum of the array

 */

unsigned char find_minimum(unsigned char* pArray, unsigned int size);





/**

 * @brief Sort from largest to smallest

 *

 * Given an array of data and a length,

 * sorts the array from largest to smallest.

 * (The zeroth Element should be the largest value, and

 * the last element (n-1) should be the smallest value. )

 *

 * @param pArray The pointer to unsigned 8-bit array

 * @param size The size of array



 */

void sort_array(unsigned char* pArray, unsigned int size);





#endif /* __STATS_H__ */

