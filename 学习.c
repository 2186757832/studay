//#include <stdio.h>
//
//int main()
//{
//	int ch;
//	while ((ch = getchar())!=EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;//跳过本次循环开始下一次循环 
//		putchar(ch);
//	}
//	return 0;
//}
//
//



//#include <stdio.h>
//
//int main()
//{
//	int ret =0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf_s("%s", password);//输入密码并存放在password中  %s指字符串 %c指单纯的字符
//	//缓冲区还剩一个\n,要将\n读取走
//	getchar();
//	printf("请确认(Y/N):");
//	ret = getchar;
//	if (ret =='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}