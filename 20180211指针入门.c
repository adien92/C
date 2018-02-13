#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void duoweishuzu() {
	//多维数组
	int a[5][3] = {
		{80,75,92},
		{61,65,71},
		{59,63,70},
		{85,87,90},
		{76,77,85}
	};
	int countM = 0;
	int countC = 0;
	int countF = 0;
	//求分组分科的平均成绩和总平均成绩
	for (int i = 0; i < 5; i++)
	{
		//各科总成绩
		//Math
		countM += a[i][0];
		countC += a[i][1];
		countF += a[i][2];
	}
	printf("全部平均分数是：%d\n", (countC + countF + countM) / 15);
	printf("数学  平均分数：%d\n", countM / 5);
	printf("C语言 平均分数：%d\n", countC / 5);
	printf("Foxpro平均分数：%d\n", countF / 5);
}

//冒泡排序法
void maopappaixu() {
	int a[10] = { 99,15,5,9,8,11,0,55,3,17 };
	int temp;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 11 - i; j++)
		{
			if (a[j - 1] > a[j]) {
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}

	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
}

//结构体入门
void jiegoutirumen() {
	//结构体入门
	struct Date
	{
		int year;
		int month;
		int day;
	} d = { 2018,2,15 };
	printf("%4d年%2d月%2d日\n", d.year, d.month, d.day);
	struct Student
	{
		int num;
		char name[20];
		struct Date d;
	};

	struct Student s1 = { 1,"jone",d };
	printf("%d", s1.d.year);
}

//结构体作业
void jiegouti() {
	//结构体作业
	//投票系统
	//投票输出得票率最高的人	
	struct beixuanren
	{
		char name[20];
		int click;
	};
	struct beixuanren ren[3] = { {"陈华",0},{"李志",0},{"韩梅梅",0} };
	printf("参加被选举人有：%s,%s,%s \n", ren[0].name, ren[1].name, ren[2].name);
	for (int i = 0; i < 5; i++)
	{
		char name[20];
		printf("输入要投票的人的姓名：");
		gets(name);
		for (int j = 0; j < 3; j++)
		{
			if (strcmp(name, ren[j].name) == 0) {
				ren[j].click += 1;
			}
		}
	}
	int max = 0;
	struct beixuanren zuigao;
	for (int i = 0; i < 3; i++)
	{
		if (max < ren[i].click) {
			max = ren[i].click;
			zuigao = ren[i];
		}
	}
	printf("\n最高的票数是%s\n", zuigao.name);
}

//九九乘法表
void jiujiuchengfa() {
	//九九乘法表
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < i + 1; j++)
		{
			printf("%d*%d=%2d	", i, j, i*j);
			if (i == j) {
				printf("\n\n");
				continue;
			}
		}
	}
}

//简单指针
//* 表示取值
//& 表示取地址
void zhizhen() {
	//声明赋值一简单变量
	int a = 10;
	//打印出a的值：
	printf("变量 a 的值：%d\n", a);
	//打印出a的地址： &表示取地址
	printf("变量 a 的地址：%d\n", &a);
	//声明一个指针p，并取到a的地址：
	int *p;
	p = &a;
	//打印出指针p表示的地址：
	printf("指针 *p 的值：%d\n", *p);
	//打印出指针p表示的值：
	printf("指针 &*p 的值：%d\n", &*p);
}

//指针与数组的关系
void zhizhenshuzu() {
	//指针与数组的关系
	int score[8] = { 75,86,70,88,62,87,69,77 };
	int sum = 0;
	int count = 8;
	int max = 0;
	int min = 99;
	int* p;

	for (p = &(score[0]); p < &(score[7]); p++)
	{
		sum += *p;
		if (max < *p) {
			max = *p;
		}
		if (min > *p) {
			min = *p;
		}
	}
	printf("总分是：%d\n", sum);
	printf("平均分是：%d\n", sum / count);
	printf("最大值%d，最小值%d\n", max, min);

}

//将二维数组转换为另一个二维数珠(行转列)
void zhuanhuan2shuzu() {
	int a[2][3] = { {1,2,3},{4,5,6} };
	int b[3][2];
	int c[6];
	int z = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			c[z] = a[j][i];
			z += 1;
		}
	}
	z = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			b[i][j] = c[z];
			z += 1;
		}
	}

	printf("输出b\n");
	printf("b[0][0]:%d\n", b[0][0]);
	printf("b[0][1]:%d\n", b[0][1]);
	printf("b[1][0]:%d\n", b[1][0]);
	printf("b[1][1]:%d\n", b[1][1]);
	printf("b[2][0]:%d\n", b[2][0]);
	printf("b[2][1]:%d\n", b[2][1]);
}

//从键盘输入九个数，九宫格，
//形成三行三列的二维数组中
//按原来位置，输入第一行第一列（就是中间那一列）
void get10() {
	int a[3][3];
	printf("请输入9个数字：");
	for (int i = 0; i < 3; i++)
	{
		printf("输入第%d列的:\n", i);
		for (int j = 0; j < 3; j++)
		{
			printf("	输入第%d行", j);
			int n;
			scanf_s("%d", &n);//输入

			a[i][j] = n;
		}
	}

	printf("输出结果为：\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 || j == 1) {
				printf("%2d		", a[i][j]);
			}
			else
				printf("%2s		", "");

			if (j == 2) {
				printf("\n");
			}
		}
	}
}

//二分法
void erfenfa() {
	//有序数组
	int a[10] = { 1,3,4,5,6,8,77,88,99,100 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d	", a[i]);
	}
	printf("\n");
	int low = 0;
	int high = 9;
	int mid = (high / 2);
	//查找
	int b;
	printf("请输入要查找的数：");
	scanf_s("%d", &b);
	int i = 0;
	int isok = 1;
	while (isok)
	{
		if (b == a[mid]) {
			isok = 0;
			printf("第%d次折半找到：\n", i);
			printf("下标识：%d\n", mid);
			break;
		}
		if (b >= a[low] && b <= a[mid]) {
			//    low<=b<high
			high = mid;
			mid = (high - low) / 2;
			i += 1;
		}
		else if (b > a[mid] && b <= a[high]) {
			//	 mid<=b<=high
			low = mid;
			mid = mid + (high - low) / 2 + 1;
			i += 1;
		}
	}

}

//指针排序
void zhizhenpaixu() {
	int a;
	int b;
	a = 1;
	b = 2;
	int* p1;
	int* p2;
	p1 = &a;
	p2 = &b;
	if (*p1 < *p2) {
		int temp = p1;
		p1 = p2;
		p2 = temp;
	}
	printf("%d,%d", *p1, *p2);
}

//指针倒叙
void zhizhendaoxu() {
	int a[10] = { 1,2,3,5,6,7,8,9,0,99 };
	int *p = &a;
	//倒叙
	for (int i = 0, j = 9 - i; i <= j; i++)
	{
		int temp = *(p + i);
		*(p + i) = *(p + j);
		*(p + j) = temp;
	}
	//输出
	for (int i = 0; i < 10; i++)
	{
		printf("%d", *(p + i));
	}
}

int main() {
	zhizhendaoxu();
	return 0;
}
