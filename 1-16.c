#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60 ���ùػ�
	//system() - ִ��ϵͳ����
	system("shutdown -s -t 60");
//again:
	while (1)
	{
		printf("��ע�⣬��ĵ�����һ�����ڹػ�����������������ȡ���ػ�\n������:>");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)//�Ƚ������ַ���
		{
			system("shutdown -a");
			break;
		}
		/*else
		{
			goto again;
		}*/
	}
	return 0;
}


//int main()
//{
//	
//	printf("hello bit\n");
//	goto again;
//	printf("���\n");
//again:
//	printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}


//RAND_MAX-32767


//void menu()
//{
//	printf("***********************************\n");
//	printf("********1. play    0.exit**********\n");
//	printf("***********************************\n");
//}
//void game()
//{
//	
//
//	//1������һ�������
//	int ret = 0;
//	int guess = 0;//���ղµ�����
//	//��ʱ����������������������ʼ��
//	//ʱ��� ������Ҫһ����ʱ�仯������������һ�������
//	//time_t time(time_t*timer)
//	//time_t;
//	
//	
//	ret = rand()%100+1;//���������1-100
//	//printf("%d\n", ret);
//	//2��������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input); 
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	
//	for (i = 1; i<=9; i++)
//	{
//		//��ӡһ�е���Ϣ
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",  i, j, i*j);//%-2d ��λ����� %2d��λ�Ҷ���
//		}
//		printf("\n");
//	}
//	return 0;
//}

//1*1=1 2*1=2 2*2=4


//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	//int max = 0;//����
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}//�˴����е����⣬�������ֶ�û��0��;��0�Ǵ����



//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//
//	}
//	//1/1+1/2+1/3...
//	//1+0+0+0+0+0...
//	printf("%lf\n", sum);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d", count);
//	return 0;
//}



//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - ��ƽ������ѧ�⺯��
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1���Գ���
//		//13 2-12
//		//����2- i-1
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//1��break������
//		//2������������
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - ��ƽ������ѧ�⺯��
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1���Գ���
//		//13 2-12
//		//����2- i-1
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//1��break������
//		//2������������
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		////�ж�year�Ƿ�Ϊ����
//		////1���ܱ�4���������Ҳ��ܱ�100���������ꡣ
//		////2���ܱ�400����������
//		//
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1���Գ���
//		//13 2-12
//		//����2- i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//1��break������
//		//2������������
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m%n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		
//	}
//	return 0;
//}

//<��������n�־���>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3
//	//�㷨ʵ��
//	//a�з����ֵ
//	//b��֮
//	//c�з���Сֵ
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//if (password == "123456")//== ����������ʾ�����ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//
//	}
//	if (3 == i)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}
//int main()
//{
//	//welcome to bit!!!!!
//	//###################
//	//w#################!
//	//we###############!!
//	//wel#############!!!
//	//...
//	//welcome to bit!!!!!
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-1;//error ��Ϊ��'\0' ���Ի��ü�ȥһ��1
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ����ĺ���- cls- �����Ļ
//		left++;
//		right--;
//	}
//	printf("welcome to bit!!!!!!");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//��ʾ���±�
//	int right = sz - 1;//���±�
//	int k = 7;
//	
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ������ �����飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ���,�±���:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;//̫������ ����������������˵
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		//n�Ľ׳�
//		sum = sum + ret;
//
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}//n�Ľ׳�
//		sum = sum + ret;
//		
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	//1-10
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;//�˴���ѭ�����
//
//}
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");//10��hehe jû���¸�ֵ
//		}
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10��ѭ��
//	//10�δ�ӡ
//	//����ǰ�պ� ֻ�ǽ���
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i = 5)//��ѭ�����ڸı���ѭ������ ��ֹѭ��ʧȥ����
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//��ʼ�� �ж� ���� ���ϵ�һ�� for������ �õ����
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;//��ʼ��
//	while (i < 10)//�ж�
//	{
//		//...
//		i++;//����   �������ֱȽϷ�ɢ ���׳�����0.
//	}
//	return 0;
//
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//			putchar(ch);
//		
//	}
//	return 0;
//}
//int main()
//{
//	//int ch = 0;
//	////EOF-end of file -�ļ�������־
//	///*while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}*/
//	char password[20] = { 0 };
//	int ret = 0;
//	int ch = 0;
//	printf("����������:>");
//	scanf("%s", password); //�������룬�������password������
//	printf("��ȷ��(y/n):>");//���뻺������ʣ��һ����\n��
//	//��ȡһ��'\n' '\n'�Ͳ�����
//	/*getchar();*/
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	ret = getchar();
//
//	if ('y' == ret)
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	/*printf("%d\n", '\n');*/
//
//	return 0;
//}

