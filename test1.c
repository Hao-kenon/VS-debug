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
//	assert(dest != NULL);//����
//	assert(src != NULL);//���� 
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'
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
//	//const		����ָ�������*���ʱ�����ε���*p,Ҳ����˵����ͨ��p���ı�*p(num)��ֵ
//	//const		����ָ�������*���ʱ�����ε���ָ�����p����p���ܱ��ı���
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