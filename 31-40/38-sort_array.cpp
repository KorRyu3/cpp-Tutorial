#include <iostream>

void sort(int array[], int size);

int main() {

    int array[] = {2, 5, 9, 10, 8, 3, 7, 4, 6, 1};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element: array) {
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size) {

    int temp;
    // 右から決めるアルゴリズム
    // バブルソート
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
