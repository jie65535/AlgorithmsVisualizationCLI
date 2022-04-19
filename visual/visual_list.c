#include "visual_list.h"

/**
 * @brief 创建列表
 * 
 * @param size 列表大小
 * @return list_t* 
 */
list_t* list_create(size_t size)
{
    assert(size > 0);
    int *arr = (int *)malloc(sizeof(int) * size);
    for (size_t i = 0; i < size; i++)
        arr[i] = i+1;
    list_t *list = (list_t *)malloc(sizeof(list_t));
    list->values = arr;
    list->size = size;
    return list;
}

/**
 * @brief 打乱列表顺序
 * 
 * @param list 
 */
void list_shuffle(list_t *list)
{
    assert(list->values != NULL);
    assert(list->size > 0);
    int *arr = list->values;
    for (size_t i = 0; i < list->size; i++) {
        size_t j = rand() % list->size;
        if (i != j) SWAP(arr[i], arr[j]);
    }
}

/**
 * @brief 销毁列表
 * 
 * @param list 
 */
void list_destroy(list_t *list)
{
    assert(list != NULL);
    assert(list->values != NULL);
    free(list->values);
    free(list);
}