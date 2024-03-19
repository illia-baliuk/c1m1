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
 * @file stats.c
 * @brief statistical analytics
 *
 * A simple application that performs statistical analytics on a dataset.
 *
 * @author Illia Baliuk
 * @date 19 March 2024
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

  printf("Source array:\n");
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  printf("\nSorted array:\n");
  print_array(test, SIZE);

}


void print_statistics(unsigned char* pArray, unsigned int size){
  printf("Statistics of the array:\n");
  printf(" - Median: %u \n", find_median(pArray, size));
  printf(" - Mean: %u \n", find_mean(pArray, size));
  printf(" - Maximum: %u \n", find_maximum(pArray, size));
  printf(" - Minuimum: %u \n", find_minimum(pArray, size));
}


void print_array(unsigned char* pArray, unsigned int size){
  printf("{");
  for (unsigned int i = 0; i < size; i++){
    printf("%u", pArray[i]);
    if (i < (size -1)) printf(", ");
  }
  printf("}\n\n");
}


unsigned char find_median(unsigned char* pArray, unsigned int size){
  unsigned char temp;
  sort_array(pArray, size);
  temp = (size % 2 == 1) ? pArray[size/2]: (pArray[(size/2)-1] + pArray[size/2])/2;
  return temp;
}


unsigned char find_mean(unsigned char* pArray, unsigned int size){
  long int sum = 0;
  for (unsigned int  i = 0; i < size; i++) {
    sum += pArray[i];
  }
  return sum / size;
}


unsigned char find_maximum(unsigned char* pArray, unsigned int size){
  unsigned char maximum = pArray[0];
  for(unsigned int i=1; i<size ; i++)
  {
     if (maximum < pArray[i])
     {
       maximum = pArray[i];
     }
  }
  return maximum;
}


unsigned char find_minimum(unsigned char* pArray, unsigned int size){
  unsigned char minimum = pArray[0];
  for(unsigned int i=1; i<size ; i++)
  {
    if (minimum > pArray[i])
    {
      minimum = pArray[i];
    }
  }
  return minimum;
}


void sort_array(unsigned char* pArray, unsigned int size){
  unsigned int j, k;
  unsigned char temp;
  for( j = 0 ; j < size-1 ; j++ )
  {
    for( k = size-1 ; k > j ; k-- )
    {
      if(pArray[k]>pArray[k-1])
      {
        temp = pArray[k-1];
        pArray[k-1] = pArray[k];
        pArray[k] = temp;
      }
    }
  }
}

