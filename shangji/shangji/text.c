#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//// ˳���ṹ�嶨��
//typedef struct {
//    int* data;
//    int length;
//} SeqList;
//
//// ��ӡ˳���
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
//// �ϲ���������˳���
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
//    // ��ʣ��Ԫ�ظ��Ƶ�L3
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
//    // ��ȡ˳���L1�ĳ��Ⱥ�����
//    scanf("%d", &n);
//    SeqList L1;
//    L1.data = (int*)malloc(n * sizeof(int));
//    L1.length = n;
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &L1.data[i]);
//    }
//
//    // ��ȡ˳���L2�ĳ��Ⱥ�����
//    scanf("%d", &m);
//    SeqList L2;
//    L2.data = (int*)malloc(m * sizeof(int));
//    L2.length = m;
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &L2.data[i]);
//    }
//
//    // ��ʼ��˳���L3
//    SeqList L3;
//    L3.data = (int*)malloc((n + m) * sizeof(int));
//    L3.length = n + m;
//
//    // �ϲ�L1��L2��L3
//    merge(&L1, &L2, &L3);
//
//    // ���L3
//    Print(&L3);
//
//    // �ͷ��ڴ�
//    free(L1.data);
//    free(L2.data);
//    free(L3.data);
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

// ˳���ṹ�嶨��
typedef struct {
    int* data;
    int length;
} SeqList;

// ��ʼ��˳���
void init(SeqList* L, int length) {
    L->data = (int*)malloc(length * sizeof(int));
    L->length = length;
}

// ��ӡ˳���
void Print(SeqList* L) {
    for (int i = 0; i < L->length; i++) {
        if (i != 0) {
            printf(" ");
        }
        printf("%d", L->data[i]);
    }
    printf("\n");
}

// �����������������Ƶ���ߣ�ż���Ƶ��ұ�
void partion(SeqList* L) {
    int left = 0;
    int right = L->length - 1;
    while (left < right) {
        // �ҵ���ߵ�һ��ż��
        while (left < right && L->data[left] % 2 != 0) {
            left++;
        }
        // �ҵ��ұߵ�һ������
        while (left < right && L->data[right] % 2 == 0) {
            right--;
        }
        // ������ߵ�ż�����ұߵ�����
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

    // ��ȡ˳���L�ĳ���
    scanf("%d", &n);
    SeqList L;
    init(&L, n);

    // ��ȡ˳���L������
    for (int i = 0; i < n; i++) {
        scanf("%d", &L.data[i]);
    }

    // ����˳���L�е�������ż��λ��
    partion(&L);

    // ����������˳���L
    Print(&L);

    // �ͷ��ڴ�
    free(L.data);

    return 0;
}

