#include <stdio.h>

int main() {
	int x = 10, y = 20, z = 100, N = 24, *ptr1, *ptr2, *ptr3, *ptrN;
	char tc='c', *ptr4;
	ptr1 = &x, ptr2 = &y, ptr3 = &z, ptr4 = &tc, ptrN = &N;
	
	printf("    Valor x = %d\n", x);
	printf("    Valor y = %d\n", y);
	printf("    Valor z = %d\n", z);
	printf("    Valor N = %d\n", N);
	printf("   Valor tc = %c\n", tc);
	printf("-------------------------------------------------------\n");
	printf("    End. Mem. x = %p\n", &x);
	printf("    End. Mem. y = %p\n", &y);
	printf("    End. Mem. z = %p\n", &z);
	printf("    End. Mem. N = %p\n", &N);
	printf("   End. Mem. tc = %p\n", &tc);
	printf("-------------------------------------------------------\n");
	printf("   End. Mem. ptr1 = %p\n", &ptr1);
	printf("   End. Mem. ptr2 = %p\n", &ptr2);
	printf("   End. Mem. ptr3 = %p\n", &ptr3);
	printf("   End. Mem. ptr4 = %p\n", &ptr4);
	printf("   End. Mem. ptrN = %p\n", &ptrN);
	printf("-------------------------------------------------------\n");
	printf("   Valor ptr1 = %p\n", ptr1);
	printf("   Valor ptr2 = %p\n", ptr2);
	printf("   Valor ptr3 = %p\n", ptr3);
	printf("   Valor ptr4 = %p\n", ptr4);
	printf("   Valor ptrN = %p\n", ptrN);
	printf("-------------------------------------------------------\n");
	printf("   Vlr onde ptr1 aponta = %d\n", x);
	printf("   Vlr onde ptr2 aponta = %d\n", y);
	printf("   Vlr onde ptr3 aponta = %d\n", z);
	printf("   Vlr onde ptr4 aponta = %d\n", tc);
	printf("   Vlr onde ptrN aponta = %d\n", N);
	printf("-------------------------------------------------------\n");
	printf("   End. Mem. onde ptr1 aponta = %p\n", &x);
	printf("   End. Mem. onde ptr2 aponta = %p\n", &y);
	printf("   End. Mem. onde ptr3 aponta = %p\n", &z);
	printf("   End. Mem. onde ptr4 aponta = %p\n", &N);
	printf("   End. Mem. onde ptrN aponta = %p\n", &tc);
	printf("-------------------------------------------------------\n");
	
}
