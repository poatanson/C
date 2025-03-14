#include <stdio.h>
#include <string.h>

int main() 
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("[%d]", *(arr + i));     // 배열에 쓰레기값이 남아있음
    }
    printf("\n");

    memset(arr, 0, sizeof(int) * 5);    //크기 5 만큼 1로 초기화 

    for (int i = 0; i < 5; i++) {
        printf("[%d]", *(arr + i));
    }
    printf("\n");
    return 0;
}