#include "visual_iterator.h"

/**
 * @brief 初始化迭代器
 * 
 * @param iter 迭代器指针
 * @param name 迭代器名称
 * @param list 迭代器指定列表
 * @param index 迭代器初始索引
 */
void iterator_init(iterator_t* iter, const char *name, list_t *list, int index)
{
    assert(iter != NULL);
    iter->name = name;
    iter->list = list;
    iter->index = index;
}

/**
 * @brief 移动迭代器到指定索引
 * 
 * @param iter 迭代器指针
 * @param index 新索引
 */
void iterator_moveTo(iterator_t *iter, int index) {
    assert(iter != NULL);
    iter->index = index;
}

/**
 * @brief 交换迭代器指向值
 * 
 * @param iter1 迭代器1
 * @param iter2 迭代器2
 */
void iterator_swap(iterator_t *iter1, iterator_t *iter2) {
    assert(iter1 != NULL);
    assert(iter1->list != NULL);
    assert(iter1->list->values != NULL);
    assert(iter1->index < iter1->list->size);
    assert(iter2 != NULL);
    assert(iter2->list != NULL);
    assert(iter2->list->values != NULL);
    assert(iter2->index < iter2->list->size);

    SWAP(iter1->list->values[iter1->index], iter1->list->values[iter1->index]);
}


