#ifndef VISUAL_ITERATOR_H
#define VISUAL_ITERATOR_H

#include "main.h"

/**
 * @brief 可视化迭代器类型
 */
typedef struct {

    /**
     * @brief 名称
     */
    const char *name;

    /**
     * @brief 列表
     */
    list_t     *list;

    /**
     * @brief 索引
     */
    int         index;
} iterator_t;

/**
 * @brief 初始化迭代器
 * 
 * @param iter 迭代器指针
 * @param name 迭代器名称
 * @param list 迭代器指定列表
 * @param index 迭代器初始索引
 */
void iterator_init(iterator_t* iter, const char *name, list_t *list, int index);

/**
 * @brief 移动迭代器到指定索引
 * 
 * @param iter 迭代器指针
 * @param index 新索引
 */
void iterator_moveTo(iterator_t *iter, int index);

/**
 * @brief 交换迭代器指向值
 * 
 * @param iter1 迭代器1
 * @param iter2 迭代器2
 */
void iterator_swap(iterator_t *iter1, iterator_t *iter2);

#endif // VISUAL_ITERATOR_H