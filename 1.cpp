#include <Windows.h>
int var = 0;
int main()
{
    __asm__("mov %eax, %ebx\n"
            "mov $56, %esi\n"
            "mov %ah, (%ebx)");

    return 0;
}