#ifndef VISUAL_LIST_H
#define VISUAL_LIST_H

#include "main.h"

/**
 * @brief 可视化列表类型
 */
typedef struct {

    /**
     * @brief 集合地址
     */
    int *values;

    /**
     * @brief 集合大小
     */
    size_t size;
} list_t;

/**
 * @brief 创建列表
 * 
 * @param size 列表大小
 * @return list_t* 
 */
list_t* list_create(size_t size);

/**
 * @brief 打乱列表顺序
 * 
 * @param list 
 */
void    list_shuffle(list_t *list);

/**
 * @brief 销毁列表
 * 
 * @param list 
 */
void    list_destroy(list_t *list);

#endif // VISUAL_LIST_H