#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#define N 500
/*单词*/
typedef struct danci
{char danc[50];
int shunx;
char yisi[100];
}DANCI;
/*声明*/
int danci1(danci dc[N]);
int danci2(danci dc[N]);
int danci3(danci dc[N]);
int danci4(danci dc[N]);
int danci5(danci dc[N]);
int danci6(danci dc[N]);
int danci7(danci dc[N]);

FILE *fp;
void main()
{struct danci dc[N];
int y,i,mc=0;
int cishu[7][500]={0};

/*背景颜色*/
system("color B0");

/*printf("\n\t\t\t\t\t\t\t\t\t\t板块一单词总览\n\n");*/
bb:system("cls");
printf("\n        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t  欢  迎  使  用  龙  龙  牌  单  词  复  习  \n\n\n\t\t\t\t\t\t\t\t\t\t1.单词复习\n\n\t\t\t\t\t\t\t\t\t\t2.查看当天复习情况\n\n\t\t\t\t\t\t\t\t\t\t3.单词总览\n\n\n\t\t\t\t\t\t\t\t\t\t\b（本程序按00一律回到主页面。）\n");
if(mc==0)   {printf("\n\t\t\t\t\t\t\t\t\t注意：全屏 → Enter → 输入【1或2或3】之后，回车进入。"); getch();mc++;}
cf:printf("\n\t\t\t\t\t\t\t\t\t\t");scanf("%d",&y);fflush(stdin);

if(y==1)
{int x,n,a,i,m,j,dui,cuo,bk,min,max;
int hu[500];
int gg[500];
char ccdd[50];
int vc[5][4]={{1,4,7,10},{1,4,7,10},{1,4,7,10},{1,4,7,10},{1,4,7,10}};
/*int vc[5][4]={{1,67,138,208},{1,40},{1},{1},{1},{1}};*/                                  //////////////////////////////////////////////////////////////////////////
hh:system("cls");
printf("\n        ——————————————————————————————————  单 词  复 习  ——————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\t请输入要复习的板块:");
aa:fflush(stdin);scanf("%d",&x);
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("请认真对待！再次输入要复习的板块:");goto  aa;}

system("cls");

if(x==6||x==7)
{printf("        ———————————————————————————————————— part %d ———————————————————————————————————————————————\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.全篇\n\n\t\t\t\t\t\t\t\t\t\t2.返回\n\n\t\t\t\t\t\t\t\t\t\t请输入要复习的篇章:");
abk:fflush(stdin);scanf("%d",&bk);
if(bk==1)  {min=1;max=n;}
else if(bk==2)  goto hh;
else if(bk==00)   goto bb;
else {printf("请认真对待！再次输入要复习的板块:");goto  abk;}
}
else
{printf("\n        ———————————————————————————————————— part %d ———————————————————————————————————————————————\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.上篇\n\n\t\t\t\t\t\t\t\t\t\t2.中篇\n\n\t\t\t\t\t\t\t\t\t\t3.下篇\n\n\t\t\t\t\t\t\t\t\t\t4.全篇\n\n\t\t\t\t\t\t\t\t\t\t5.返回\n\n\t\t\t\t\t\t\t\t\t\t请输入要复习的篇章:");
aak:fflush(stdin);scanf("%d",&bk);
if(bk==1)  {min=vc[x-1][bk-1];max=vc[x-1][bk];}
else if(bk==2)   {min=vc[x-1][bk-1]+1;max=vc[x-1][bk];}
else if(bk==3)  {min=vc[x-1][bk-1]+1;max=vc[x-1][bk];}
else if(bk==4)   {min=vc[x-1][0];max=vc[x-1][3];}
else if(bk==5)   goto hh;
else if(bk==00)   goto bb;
else {printf("请认真对待！再次输入要复习的板块:");goto  aak;}
}

system("cls");
for(i=3;i>0;i--)
{printf("\n        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t你只有两次的机会输入单词，%d秒后进入单词复习。",i);
Sleep(500);
system("cls");
}

if(x==6||x==7) 
printf("\n        ——————————————————————————————— part %d    全篇  （共 %d 个） ——————————————————————————————————————————\n",x,max-min+1);
else 
	if(bk==1)  printf("\n        ——————————————————————————————— part %d    上篇  （共 %d 个） ——————————————————————————————————————————\n",x,max-min+1);
	else if(bk==2)   printf("\n        ——————————————————————————————— part %d    中篇  （共 %d 个） ——————————————————————————————————————————\n",x,max-min+1);
	else if(bk==3)  printf("\n        ——————————————————————————————— part %d    下篇  （共 %d 个） ——————————————————————————————————————————\n",x,max-min+1);
	else   printf("\n        ——————————————————————————————— part %d    全篇  （共 %d 个） ——————————————————————————————————————————\n",x,max-min+1);

dui=0;cuo=0;

srand((unsigned)time(NULL));

a=rand()%(n-1+1+1);
while(a==0)
a=rand()%(n-1+1+1);

hu[0]=a;
for(i=1;i<n;i++)
{a=rand()%(n-1+1+1);
while(a==0)
a=rand()%(n-1+1+1);
for(j=0;j<i;j++)
if(a==hu[j])  break;
if(i>j)  i--;
else hu[i]=a;
}

j=0;
for(i=0;i<n;i++)
if(hu[i]>=min&&hu[i]<=max)  gg[j++]=hu[i];

for(i=0;i<j;i++)
{printf("\n\t\t\t\t\t\t\t\t\b\b\b\b√. %-100s\n",dc[gg[i]-1].yisi);
m=0;
gv:printf("\n\t\t\t\t\t\t\t\t");fflush(stdin);gets(ccdd);

if(ccdd[0]!='0'&&ccdd[1]!='0')   

		if(strcmp(ccdd,dc[gg[i]-1].danc)==0)      {dui++;cishu[x-1][gg[i]-1]=1;}
		else {m++;if(m==1)  goto gv;
		           else {printf("\n\t\t\t\t\t\t\t\t正确答案:%s\n",dc[gg[i]-1].danc);cishu[x-1][gg[i]-1]=m;cuo++;}
		     }
else 
{if((i+1)%10==0)
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n\n");
}
else
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n\n");
}
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\t本次退出前\n\n\t\t\t\t\t\t\t\t\t\t对%d个，错%d个，未复习%d个\n\n\n\t\t\t\t\t\t\t\t\t\t按任意键回到主页。",dui,cuo+1,max-min-dui-cuo-1+1);getch();goto bb;
goto bb;
}

if((i+1)%10==0)
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
}printf("\n"); 
}
if(j%10!=0)
{printf("\n                                                                                                                                                                     %d               \n",j);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n\n");
}
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\t本板块已经复习完了\n\n\t\t\t\t\t\t\t\t\t\t对%d个，错%d个，未复习%d个\n\n\n\t\t\t\t\t\t\t\t\t\t按任意键回到主页。",dui,cuo+1,max-min-dui-cuo-1+1);getch();goto bb;

}

else if(y==2)
{int n,x,ma,mb,mc,ki,ra;
ghh:system("cls");
printf("\n        ——————————————————————————————————  复 习  情 况  ——————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\t请输入要查找的复习单词板块情况:");
dd:fflush(stdin);printf("\n\t\t\t\t\t\t\t\t\t\t");scanf("%d",&x);
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("\n\t\t\t\t\t\t\t\t\t\t");printf("请认真对待！再次输入要查找的复习单词板块情况:");goto  dd;}
system("cls");
ma=0;mb=0;mc=0;;
for(i=0;i<n;i++)
if(cishu[x-1][i]==0) ma++;
else if(cishu[x-1][i]==1)  mb++;
else mc++;
printf("\n        ———————————————————————————————————— part %d ———————————————————————————————————————————————\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.错题\n\n\t\t\t\t\t\t\t\t\t\t2.已复习\n\n\t\t\t\t\t\t\t\t\t\t3.未复习\n\n\t\t\t\t\t\t\t\t\t\t4.返回\n\n\n\t\t\t\t\t\t\t\t\t\t请输入要查看的题库:");
dpp:fflush(stdin);scanf("%d",&ra);
gpt:
if(ra==1)  
{printf("\n\n");
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\t错题（再接再厉）：%d\n\n",mc);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
for(i=0;i<n;i++)
if(cishu[x-1][i]==2)
{printf("\t\t%-50s%-100s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
}printf("\n");
}
}

else if(ra==2)  
{printf("\n\n");
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\t已复习单词：%d\n\n",mb);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
for(i=0;i<n;i++)
if(cishu[x-1][i]==1)
{printf("\t\t%-50s%-100s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
}printf("\n");
}
}

else if(ra==3)  
{printf("\n\n");
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\t未复习单词：%d\n\n",ma);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
for(i=0;i<n;i++)
if(cishu[x-1][i]==0)
{printf("\t\t%-50s%-100s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
}printf("\n");
}
}
else if(ra==4)   goto ghh;
else if(ra==00)   goto bb;
else   {printf("请认真对待！再次输入要查看的题库:");goto  dpp;}

fflush(stdin);printf("\n\t\t\t\t\t\t\t\t\t\t请输入要查看的题库:");scanf("%d",&ra);
if(ra==00||ra==1||ra==2||ra==3||ra==4)
{system("cls");
printf("\n        ———————————————————————————————————— part %d ———————————————————————————————————————————————\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.错题\n\n\t\t\t\t\t\t\t\t\t\t2.已复习\n\n\t\t\t\t\t\t\t\t\t\t3.未复习\n\n\t\t\t\t\t\t\t\t\t\t4.返回\n\n\n\t\t\t\t\t\t\t\t\t\t请输入要查看的题库:");
goto gpt;
}

}

else if(y==3)
{int x,n;
char ccdd[100];
char da[2]={00};
op:system("cls");
printf("\n        ——————————————————————————————————  单 词  总 览  ——————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\t请输入要查看的单词板块:");
dp:fflush(stdin);printf("\n\t\t\t\t\t\t\t\t\t\t");scanf("%d",&x);
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("\n\t\t\t\t\t\t\t\t\t\t请认真对待！再次输入要查看的单词板块:");goto  dp;}
system("cls");
printf("\n        ———————————————————————————————————————————————————————————————————————————————————————\n");
printf("\n\t\t\t\t\t\t\t\t\t\t板块%d单词总览(%d个)\n\n",x,n);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
for(i=0;i<n;i++)
{printf("\t\t%-50s%-100s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ———————————————————————————————————————————————————————————————————————————————————————\n");
}printf("\n");
}
fflush(stdin);printf("\n\n\t\t\t\t\t\t\t\t\t\t按任意键返回");getch();goto op;

}
else
{printf("\t\t\t\t\t\t\t\t\t\t请认真对待！再次输入要复习的板块:");goto  cf;}

}




int danci1(danci dc[N])
{int n;
n=0;
if((fp=fopen("danc1.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fp))
{fscanf(fp,"%50s%4d%100s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fp);
return n;
}

int danci2(danci dc[N])
{int n;
n=0;
if((fp=fopen("danc2.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fp))
{fscanf(fp,"%50s%4d%100s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fp);
return n;
}

int danci3(danci dc[N])
{int n;
n=0;
if((fp=fopen("danc3.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fp))
{fscanf(fp,"%50s%4d%100s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fp);
return n;
}

int danci4(danci dc[N])
{int n;
n=0;
if((fp=fopen("danc4.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fp))
{fscanf(fp,"%50s%4d%100s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("%-50s%-4d%-100s",dc[n].danc,dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fp);
return n;
}

int danci5(danci dc[N])
{int n;
n=0;
if((fp=fopen("danc5.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fp))
{fscanf(fp,"%50s%4d%100s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fp);
return n;
}

int danci6(danci dc[N])
{int n;
n=0;
if((fp=fopen("danc6.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fp))
{fscanf(fp,"%50s%4d%100s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fp);
return n;
}

int danci7(danci dc[N])
{int n;
n=0;
if((fp=fopen("danc7.txt","r"))==NULL)
{printf("敬请期待");exit(0);}
while(!feof(fp))
{fscanf(fp,"%50s%4d%100s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fp);
return n;
}

/*输入输出*/
/*if((fp=fopen("danc1.txt","w"))==NULL)
{printf("no");exit(0);}
for(i=0;i<3;i++)
	{scanf("%50s%100s",&dc[i].danc,&dc[i].yisi);
	dc[i].shunx=i+1;
	fprintf(fp,"%-50s%-4d%-100s\n",dc[i].danc,dc[i].shunx,dc[i].yisi);
    }
fclose(fp);
if((fp=fopen("danc1.txt","r"))==NULL)
	{printf("no");exit(0);}
for(i=0;i<10;i++)
	{
	fscanf(fp,"%50s%4d%100s\n",dc[i].danc,&dc[i].shunx,dc[i].yisi);
	printf("%-50s%-4d%-100s",dc[i].danc,dc[i].shunx,dc[i].yisi);
	printf("\n");
    }
fclose(fp);*/