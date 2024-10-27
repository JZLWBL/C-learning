#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//// 顺序表结构体定义
//typedef struct {
//    int* data;
//    int length;
//} SeqList;
//
//// 打印顺序表
//void Print(SeqList* L) {
//    for (int i = 0; i < L->length; i++) {
//        if (i != 0) {
//            printf(" ");
//        }
//        printf("%d", L->data[i]);
//    }
//    printf("\n");
//}
//
//// 合并两个有序顺序表
//void merge(SeqList* L1, SeqList* L2, SeqList* L3) {
//    int i = 0, j = 0, k = 0;
//    while (i < L1->length && j < L2->length) {
//        if (L1->data[i] <= L2->data[j]) {
//            L3->data[k++] = L1->data[i++];
//        }
//        else {
//            L3->data[k++] = L2->data[j++];
//        }
//    }
//    // 将剩余元素复制到L3
//    while (i < L1->length) {
//        L3->data[k++] = L1->data[i++];
//    }
//    while (j < L2->length) {
//        L3->data[k++] = L2->data[j++];
//    }
//    L3->length = k;
//}
//
//int main() {
//    int n, m;
//
//    // 读取顺序表L1的长度和数据
//    scanf("%d", &n);
//    SeqList L1;
//    L1.data = (int*)malloc(n * sizeof(int));
//    L1.length = n;
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &L1.data[i]);
//    }
//
//    // 读取顺序表L2的长度和数据
//    scanf("%d", &m);
//    SeqList L2;
//    L2.data = (int*)malloc(m * sizeof(int));
//    L2.length = m;
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &L2.data[i]);
//    }
//
//    // 初始化顺序表L3
//    SeqList L3;
//    L3.data = (int*)malloc((n + m) * sizeof(int));
//    L3.length = n + m;
//
//    // 合并L1和L2到L3
//    merge(&L1, &L2, &L3);
//
//    // 输出L3
//    Print(&L3);
//
//    // 释放内存
//    free(L1.data);
//    free(L2.data);
//    free(L3.data);
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

// 顺序表结构体定义
typedef struct {
    int* data;
    int length;
} SeqList;

// 初始化顺序表
void init(SeqList* L, int length) {
    L->data = (int*)malloc(length * sizeof(int));
    L->length = length;
}

// 打印顺序表
void Print(SeqList* L) {
    for (int i = 0; i < L->length; i++) {
        if (i != 0) {
            printf(" ");
        }
        printf("%d", L->data[i]);
    }
    printf("\n");
}

// 分区函数，将奇数移到左边，偶数移到右边
void partion(SeqList* L) {
    int left = 0;
    int right = L->length - 1;
    while (left < right) {
        // 找到左边第一个偶数
        while (left < right && L->data[left] % 2 != 0) {
            left++;
        }
        // 找到右边第一个奇数
        while (left < right && L->data[right] % 2 == 0) {
            right--;
        }
        // 交换左边的偶数和右边的奇数
        if (left < right) {
            int temp = L->data[left];
            L->data[left] = L->data[right];
            L->data[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    int n;

    // 读取顺序表L的长度
    scanf("%d", &n);
    SeqList L;
    init(&L, n);

    // 读取顺序表L的数据
    for (int i = 0; i < n; i++) {
        scanf("%d", &L.data[i]);
    }

    // 调整顺序表L中的奇数和偶数位置
    partion(&L);

    // 输出调整后的顺序表L
    Print(&L);

    // 释放内存
    free(L.data);

    return 0;
}

