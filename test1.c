#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>


//void  my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}


//void  my_strcpy(char* dest, char* src)
//{
//	if(*dest != NULL && *src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}


//char*  my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言 
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
// 
//int main()
//{
//	char arr1[] = "####################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	const int num = 10; 
//
//	const int* p = &num;
//	//*p = 20;
//	//const		放在指针变量的*左边时，修饰的是*p,也就是说不能通过p来改变*p(num)的值
//	//const		放在指针变量的*左边时，修饰的是指针变量p本身，p不能被改变了
//	printf("%d\n", num);
//	return 0;
//}

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}