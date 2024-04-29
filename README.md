# 0x1B. C - Sorting Algorithms & Big O

## Description
This project implements various sorting algorithms in C and explores the concept of Big O notation to analyze their time complexity. The goal is to understand different sorting techniques, evaluate their efficiency, and select the best algorithm for a given input size.

## Learning Objectives
* Implement at least four different sorting algorithms in C.
* Understand the concept of Big O notation and how to evaluate the time complexity of an algorithm.
* Select the best sorting algorithm for a given input based on its characteristics and expected performance.
* Learn about stable sorting algorithms and their significance in certain scenarios.

## File Descriptions
* `sort.h`: Header file containing prototypes of all sorting functions.
* `0-O`: The big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line: `best case`, `average case`, and
`worst case`
* `0-bubble_sort.c`: Implementation of the bubble sort algorithm.
* `1-insertion_sort_list.c`: Implementation of the insertion sort algorithm for linked lists.
* `2-selection_sort.c`: Implementation of the selection sort algorithm.
* `3-quick_sort.c`: Implementation of the quick sort algorithm using the Lomuto partition scheme.

## Requirements
* Allowed editors: vi, vim, emacs
* All files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89
* Code must follow the Betty style and pass betty-style.pl and betty-doc.pl checks.
* No global variables are allowed.
* Each file can contain no more than 5 functions.
* Unless specified otherwise, the standard library is not allowed.
* Header files should be include guarded.
* A list/array does not need to be sorted if its size is less than 2.

## Usage
* To compile the sorting algorithms, run:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select
* To run the compiled program, use:
`./bubble`
`./insertion`
`./select`
## Authors
* Katleho Lekale(https://github.com/Katalyst99) - @katleho_lekale(https://twitter.com/katleho_lekale)

