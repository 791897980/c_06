#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60 设置关机
	//system() - 执行系统命令
	system("shutdown -s -t 60");
//again:
	while (1)
	{
		printf("请注意，你的电脑在一分钟内关机，如果输入我是猪就取消关机\n请输入:>");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)//比较两个字符串
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
//	printf("你好\n");
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
//	//1、生成一个随机数
//	int ret = 0;
//	int guess = 0;//接收猜的数字
//	//拿时间戳来设置随机数的生成起始点
//	//时间戳 这里需要一个随时变化的数，来生成一个随机数
//	//time_t time(time_t*timer)
//	//time_t;
//	
//	
//	ret = rand()%100+1;//生成随机数1-100
//	//printf("%d\n", ret);
//	//2、猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择>:");
//		scanf("%d", &input); 
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
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
//		//打印一行的信息
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",  i, j, i*j);//%-2d 两位左对齐 %2d两位右对齐
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
//	//int max = 0;//错误
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
//}//此代码有点问题，所有数字都没有0大;放0是错误的



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
//	//sqrt - 开平方的数学库函数
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1、试除法
//		//13 2-12
//		//产生2- i-1
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//1、break跳出来
//		//2、条件不满足
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
//	//sqrt - 开平方的数学库函数
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1、试除法
//		//13 2-12
//		//产生2- i-1
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//1、break跳出来
//		//2、条件不满足
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
//		////判断year是否为闰年
//		////1、能被4整除，并且不能被100整除是闰年。
//		////2、能被400整除是闰年
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
//		//判断i是否为素数
//		//素数判断的规则
//		//1、试除法
//		//13 2-12
//		//产生2- i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//1、break跳出来
//		//2、条件不满足
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

//<素数求解的n种境界>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3
//	//算法实现
//	//a中放最大值
//	//b次之
//	//c中放最小值
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
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//if (password == "123456")//== 不能用来表示两个字符串是否相等，应该使用一个库函数-strcmp
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//			printf("密码错误\n");
//
//	}
//	if (3 == i)
//	{
//		printf("三次密码均错误，退出程序\n");
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
//	//int right = sizeof(arr1) / sizeof(arr1[0])-1;//error 因为有'\0' 所以还得减去一个1
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的函数- cls- 清空屏幕
//		left++;
//		right--;
//	}
//	printf("welcome to bit!!!!!!");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//表示左下标
//	int right = sz - 1;//右下标
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
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//写一个代码 在数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标是:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;//太啰嗦了 相对于有序的数组来说
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
//		//n的阶乘
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
//		}//n的阶乘
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
//	return 0;//此代码循环零次
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
//			printf("hehe\n");//10个hehe j没重新赋值
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
//	//10次循环
//	//10次打印
//	//建议前闭后开 只是建议
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
//		if (i = 5)//在循环体内改变了循环变量 防止循环失去控制
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//初始化 判断 调整 集合到一起 for有优势 用的最多
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
//	int i = 0;//初始化
//	while (i < 10)//判断
//	{
//		//...
//		i++;//调整   三个部分比较分散 容易出问题0.
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
//	////EOF-end of file -文件结束标志
//	///*while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}*/
//	char password[20] = { 0 };
//	int ret = 0;
//	int ch = 0;
//	printf("请输入密码:>");
//	scanf("%s", password); //输入密码，并存放在password数组中
//	printf("请确认(y/n):>");//输入缓冲区还剩余一个‘\n’
//	//读取一下'\n' '\n'就不在了
//	/*getchar();*/
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	ret = getchar();
//
//	if ('y' == ret)
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	/*printf("%d\n", '\n');*/
//
//	return 0;
//}

