#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void duoweishuzu() {
	//��ά����
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
	//�����ֿƵ�ƽ���ɼ�����ƽ���ɼ�
	for (int i = 0; i < 5; i++)
	{
		//�����ܳɼ�
		//Math
		countM += a[i][0];
		countC += a[i][1];
		countF += a[i][2];
	}
	printf("ȫ��ƽ�������ǣ�%d\n", (countC + countF + countM) / 15);
	printf("��ѧ  ƽ��������%d\n", countM / 5);
	printf("C���� ƽ��������%d\n", countC / 5);
	printf("Foxproƽ��������%d\n", countF / 5);
}

//ð������
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

//�ṹ������
void jiegoutirumen() {
	//�ṹ������
	struct Date
	{
		int year;
		int month;
		int day;
	} d = { 2018,2,15 };
	printf("%4d��%2d��%2d��\n", d.year, d.month, d.day);
	struct Student
	{
		int num;
		char name[20];
		struct Date d;
	};

	struct Student s1 = { 1,"jone",d };
	printf("%d", s1.d.year);
}

//�ṹ����ҵ
void jiegouti() {
	//�ṹ����ҵ
	//ͶƱϵͳ
	//ͶƱ�����Ʊ����ߵ���	
	struct beixuanren
	{
		char name[20];
		int click;
	};
	struct beixuanren ren[3] = { {"�»�",0},{"��־",0},{"��÷÷",0} };
	printf("�μӱ�ѡ�����У�%s,%s,%s \n", ren[0].name, ren[1].name, ren[2].name);
	for (int i = 0; i < 5; i++)
	{
		char name[20];
		printf("����ҪͶƱ���˵�������");
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
	printf("\n��ߵ�Ʊ����%s\n", zuigao.name);
}

//�žų˷���
void jiujiuchengfa() {
	//�žų˷���
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

//��ָ��
//* ��ʾȡֵ
//& ��ʾȡ��ַ
void zhizhen() {
	//������ֵһ�򵥱���
	int a = 10;
	//��ӡ��a��ֵ��
	printf("���� a ��ֵ��%d\n", a);
	//��ӡ��a�ĵ�ַ�� &��ʾȡ��ַ
	printf("���� a �ĵ�ַ��%d\n", &a);
	//����һ��ָ��p����ȡ��a�ĵ�ַ��
	int *p;
	p = &a;
	//��ӡ��ָ��p��ʾ�ĵ�ַ��
	printf("ָ�� *p ��ֵ��%d\n", *p);
	//��ӡ��ָ��p��ʾ��ֵ��
	printf("ָ�� &*p ��ֵ��%d\n", &*p);
}

//ָ��������Ĺ�ϵ
void zhizhenshuzu() {
	//ָ��������Ĺ�ϵ
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
	printf("�ܷ��ǣ�%d\n", sum);
	printf("ƽ�����ǣ�%d\n", sum / count);
	printf("���ֵ%d����Сֵ%d\n", max, min);

}

//����ά����ת��Ϊ��һ����ά����(��ת��)
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

	printf("���b\n");
	printf("b[0][0]:%d\n", b[0][0]);
	printf("b[0][1]:%d\n", b[0][1]);
	printf("b[1][0]:%d\n", b[1][0]);
	printf("b[1][1]:%d\n", b[1][1]);
	printf("b[2][0]:%d\n", b[2][0]);
	printf("b[2][1]:%d\n", b[2][1]);
}

//�Ӽ�������Ÿ������Ź���
//�γ��������еĶ�ά������
//��ԭ��λ�ã������һ�е�һ�У������м���һ�У�
void get10() {
	int a[3][3];
	printf("������9�����֣�");
	for (int i = 0; i < 3; i++)
	{
		printf("�����%d�е�:\n", i);
		for (int j = 0; j < 3; j++)
		{
			printf("	�����%d��", j);
			int n;
			scanf_s("%d", &n);//����

			a[i][j] = n;
		}
	}

	printf("������Ϊ��\n");
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

//���ַ�
void erfenfa() {
	//��������
	int a[10] = { 1,3,4,5,6,8,77,88,99,100 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d	", a[i]);
	}
	printf("\n");
	int low = 0;
	int high = 9;
	int mid = (high / 2);
	//����
	int b;
	printf("������Ҫ���ҵ�����");
	scanf_s("%d", &b);
	int i = 0;
	int isok = 1;
	while (isok)
	{
		if (b == a[mid]) {
			isok = 0;
			printf("��%d���۰��ҵ���\n", i);
			printf("�±�ʶ��%d\n", mid);
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

//ָ������
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

//ָ�뵹��
void zhizhendaoxu() {
	int a[10] = { 1,2,3,5,6,7,8,9,0,99 };
	int *p = &a;
	//����
	for (int i = 0, j = 9 - i; i <= j; i++)
	{
		int temp = *(p + i);
		*(p + i) = *(p + j);
		*(p + j) = temp;
	}
	//���
	for (int i = 0; i < 10; i++)
	{
		printf("%d", *(p + i));
	}
}

int main() {
	zhizhendaoxu();
	return 0;
}
