#include <stdio.h>
#include <string.h>

void main() 
{
    char source[32] = "복사 대상 메모리";
    char dest[32] = "복사 될 메모리";

    printf("복사 전: %s\n", dest);

    // src 메모리를 sizeof(src) 만큼 dest로 복사
    memcpy(dest, source, sizeof(source));

    printf("복사 후 : %s\n", dest);
}