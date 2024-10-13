#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}


//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//		for (i = 0; i < 3; i++)
//		{
//			int j = 0;
//			for (j = 0; j < 5; j++)
//			{
//				printf("%d ", arr[i][j]);
//			}
//			printf("\n");
//		}
//		return 0;
//	
//}

//int main()
//{
//	char arr2[] = "########################";
//	char arr1[] = "I am very miss u forever";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	printf("%s\n", arr2);
//	while(left <= right) {
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//
//}


int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	double sz = (right + left) / 2;
	printf("%f", sz);
	return 0;
}