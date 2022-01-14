#ifndef __SORT_H__
#define __SORT_H__

#include <stdio.h>
#include <stdint.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Print Array */
void print_array(const int *array, size_t size);

/* Print List */
void print_list(const listint_t *list);

/* Bubble sort */
void bubble_sort(int *array, size_t size);

/* Selection sort */
void selection_sort(int *array, size_t size);

/*  header files for  quick sort. and insection sort */
void insertion_sort_list(listint_t **list);
void quicksort_recursion(int array[], int low, int high, size_t s);
void quick_sort(int *array, size_t size);
void swap(int *x, int *y);
int partition(int array[], int low, int high, size_t print);
void quick_sort_hoare(int *array, size_t size);

void quick_sorter(int *array, int lo, int hi, int size);

/* Shell sort */
void shell_sorting_function(int *array, int size, int gap);
void shell_sort(int *array, size_t size);

#endif /* __SORT_H__ */
