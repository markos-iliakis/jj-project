#include "relation.h"
#include "hash_functions.h"
#include <string.h>
#include <time.h>
#include <stdint.h>

#define YDIMEN 4
#define XDIMEN 4
#define COMPARE 2

struct histogram;

typedef struct histogram {
    int value;
    int freq;
    struct histogram *next;
} histogram;

typedef struct sum {
    int hashed_key;
    int index;
}sum;

void printArrayTuple(int** x_array, tuple* x_tuple, int xdimen, int ydimen);
int** makeRandArray(int xdimen, int ydimen);
tuple* makeHashIdArray(int** x_array, int xdimen);
histogram* searchHistogram(histogram *r_hist, int32_t check);
void addHistogram(histogram **r_hist, int32_t new_value);
void addFreq(histogram *node);
void destroyHistogram(histogram *r_hist);
void printHistogram(histogram* hist);
void printPsum(sum* psum, int hist_length);
int histogramSize(histogram *);
void createHist(histogram *psum, histogram *hist, int hist_length);
ord_relation* createReorderedarray(sum *psum, int size, relation *r_relation, int xdimen, int ydimen);
void printOrderedarray(ord_relation *array);
