#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#define N 500
/*����*/
typedef struct danci
{char danc[50];
int shunx;
char yisi[100];
}DANCI;
/*����*/
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

/*������ɫ*/
system("color B0");

/*printf("\n\t\t\t\t\t\t\t\t\t\t���һ��������\n\n");*/
bb:system("cls");
printf("\n        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
printf("\n\t\t\t\t\t\t\t\t\t  ��  ӭ  ʹ  ��  ��  ��  ��  ��  ��  ��  ϰ  \n\n\n\t\t\t\t\t\t\t\t\t\t1.���ʸ�ϰ\n\n\t\t\t\t\t\t\t\t\t\t2.�鿴���츴ϰ���\n\n\t\t\t\t\t\t\t\t\t\t3.��������\n\n\n\t\t\t\t\t\t\t\t\t\t\b��������00һ�ɻص���ҳ�档��\n");
if(mc==0)   {printf("\n\t\t\t\t\t\t\t\t\tע�⣺ȫ�� �� Enter �� ���롾1��2��3��֮�󣬻س����롣"); getch();mc++;}
cf:printf("\n\t\t\t\t\t\t\t\t\t\t");scanf("%d",&y);fflush(stdin);

if(y==1)
{int x,n,a,i,m,j,dui,cuo,bk,min,max;
int hu[500];
int gg[500];
char ccdd[50];
int vc[5][4]={{1,4,7,10},{1,4,7,10},{1,4,7,10},{1,4,7,10},{1,4,7,10}};
/*int vc[5][4]={{1,67,138,208},{1,40},{1},{1},{1},{1}};*/                                  //////////////////////////////////////////////////////////////////////////
hh:system("cls");
printf("\n        ��������������������������������������������������������������������  �� ��  �� ϰ  ��������������������������������������������������������������������������������������������\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\t������Ҫ��ϰ�İ��:");
aa:fflush(stdin);scanf("%d",&x);
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("������Դ����ٴ�����Ҫ��ϰ�İ��:");goto  aa;}

system("cls");

if(x==6||x==7)
{printf("        ������������������������������������������������������������������������ part %d ����������������������������������������������������������������������������������������������\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.ȫƪ\n\n\t\t\t\t\t\t\t\t\t\t2.����\n\n\t\t\t\t\t\t\t\t\t\t������Ҫ��ϰ��ƪ��:");
abk:fflush(stdin);scanf("%d",&bk);
if(bk==1)  {min=1;max=n;}
else if(bk==2)  goto hh;
else if(bk==00)   goto bb;
else {printf("������Դ����ٴ�����Ҫ��ϰ�İ��:");goto  abk;}
}
else
{printf("\n        ������������������������������������������������������������������������ part %d ����������������������������������������������������������������������������������������������\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.��ƪ\n\n\t\t\t\t\t\t\t\t\t\t2.��ƪ\n\n\t\t\t\t\t\t\t\t\t\t3.��ƪ\n\n\t\t\t\t\t\t\t\t\t\t4.ȫƪ\n\n\t\t\t\t\t\t\t\t\t\t5.����\n\n\t\t\t\t\t\t\t\t\t\t������Ҫ��ϰ��ƪ��:");
aak:fflush(stdin);scanf("%d",&bk);
if(bk==1)  {min=vc[x-1][bk-1];max=vc[x-1][bk];}
else if(bk==2)   {min=vc[x-1][bk-1]+1;max=vc[x-1][bk];}
else if(bk==3)  {min=vc[x-1][bk-1]+1;max=vc[x-1][bk];}
else if(bk==4)   {min=vc[x-1][0];max=vc[x-1][3];}
else if(bk==5)   goto hh;
else if(bk==00)   goto bb;
else {printf("������Դ����ٴ�����Ҫ��ϰ�İ��:");goto  aak;}
}

system("cls");
for(i=3;i>0;i--)
{printf("\n        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
printf("\n\t\t\t\t\t\t\t\t��ֻ�����εĻ������뵥�ʣ�%d�����뵥�ʸ�ϰ��",i);
Sleep(500);
system("cls");
}

if(x==6||x==7) 
printf("\n        �������������������������������������������������������������� part %d    ȫƪ  ���� %d ���� ������������������������������������������������������������������������������������\n",x,max-min+1);
else 
	if(bk==1)  printf("\n        �������������������������������������������������������������� part %d    ��ƪ  ���� %d ���� ������������������������������������������������������������������������������������\n",x,max-min+1);
	else if(bk==2)   printf("\n        �������������������������������������������������������������� part %d    ��ƪ  ���� %d ���� ������������������������������������������������������������������������������������\n",x,max-min+1);
	else if(bk==3)  printf("\n        �������������������������������������������������������������� part %d    ��ƪ  ���� %d ���� ������������������������������������������������������������������������������������\n",x,max-min+1);
	else   printf("\n        �������������������������������������������������������������� part %d    ȫƪ  ���� %d ���� ������������������������������������������������������������������������������������\n",x,max-min+1);

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
{printf("\n\t\t\t\t\t\t\t\t\b\b\b\b��. %-100s\n",dc[gg[i]-1].yisi);
m=0;
gv:printf("\n\t\t\t\t\t\t\t\t");fflush(stdin);gets(ccdd);

if(ccdd[0]!='0'&&ccdd[1]!='0')   

		if(strcmp(ccdd,dc[gg[i]-1].danc)==0)      {dui++;cishu[x-1][gg[i]-1]=1;}
		else {m++;if(m==1)  goto gv;
		           else {printf("\n\t\t\t\t\t\t\t\t��ȷ��:%s\n",dc[gg[i]-1].danc);cishu[x-1][gg[i]-1]=m;cuo++;}
		     }
else 
{if((i+1)%10==0)
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n\n");
}
else
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n\n");
}
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
printf("\n\t\t\t\t\t\t\t\t\t\t�����˳�ǰ\n\n\t\t\t\t\t\t\t\t\t\t��%d������%d����δ��ϰ%d��\n\n\n\t\t\t\t\t\t\t\t\t\t��������ص���ҳ��",dui,cuo+1,max-min-dui-cuo-1+1);getch();goto bb;
goto bb;
}

if((i+1)%10==0)
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
}printf("\n"); 
}
if(j%10!=0)
{printf("\n                                                                                                                                                                     %d               \n",j);
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n\n");
}
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
printf("\n\t\t\t\t\t\t\t\t\t\t������Ѿ���ϰ����\n\n\t\t\t\t\t\t\t\t\t\t��%d������%d����δ��ϰ%d��\n\n\n\t\t\t\t\t\t\t\t\t\t��������ص���ҳ��",dui,cuo+1,max-min-dui-cuo-1+1);getch();goto bb;

}

else if(y==2)
{int n,x,ma,mb,mc,ki,ra;
ghh:system("cls");
printf("\n        ��������������������������������������������������������������������  �� ϰ  �� ��  ��������������������������������������������������������������������������������������������\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\t������Ҫ���ҵĸ�ϰ���ʰ�����:");
dd:fflush(stdin);printf("\n\t\t\t\t\t\t\t\t\t\t");scanf("%d",&x);
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("\n\t\t\t\t\t\t\t\t\t\t");printf("������Դ����ٴ�����Ҫ���ҵĸ�ϰ���ʰ�����:");goto  dd;}
system("cls");
ma=0;mb=0;mc=0;;
for(i=0;i<n;i++)
if(cishu[x-1][i]==0) ma++;
else if(cishu[x-1][i]==1)  mb++;
else mc++;
printf("\n        ������������������������������������������������������������������������ part %d ����������������������������������������������������������������������������������������������\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.����\n\n\t\t\t\t\t\t\t\t\t\t2.�Ѹ�ϰ\n\n\t\t\t\t\t\t\t\t\t\t3.δ��ϰ\n\n\t\t\t\t\t\t\t\t\t\t4.����\n\n\n\t\t\t\t\t\t\t\t\t\t������Ҫ�鿴�����:");
dpp:fflush(stdin);scanf("%d",&ra);
gpt:
if(ra==1)  
{printf("\n\n");
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
printf("\n\t\t\t\t\t\t\t\t\t\t���⣨�ٽ���������%d\n\n",mc);
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
for(i=0;i<n;i++)
if(cishu[x-1][i]==2)
{printf("\t\t%-50s%-100s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
}printf("\n");
}
}

else if(ra==2)  
{printf("\n\n");
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
printf("\n\t\t\t\t\t\t\t\t\t\t�Ѹ�ϰ���ʣ�%d\n\n",mb);
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
for(i=0;i<n;i++)
if(cishu[x-1][i]==1)
{printf("\t\t%-50s%-100s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
}printf("\n");
}
}

else if(ra==3)  
{printf("\n\n");
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
printf("\n\t\t\t\t\t\t\t\t\t\tδ��ϰ���ʣ�%d\n\n",ma);
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
for(i=0;i<n;i++)
if(cishu[x-1][i]==0)
{printf("\t\t%-50s%-100s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
}printf("\n");
}
}
else if(ra==4)   goto ghh;
else if(ra==00)   goto bb;
else   {printf("������Դ����ٴ�����Ҫ�鿴�����:");goto  dpp;}

fflush(stdin);printf("\n\t\t\t\t\t\t\t\t\t\t������Ҫ�鿴�����:");scanf("%d",&ra);
if(ra==00||ra==1||ra==2||ra==3||ra==4)
{system("cls");
printf("\n        ������������������������������������������������������������������������ part %d ����������������������������������������������������������������������������������������������\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.����\n\n\t\t\t\t\t\t\t\t\t\t2.�Ѹ�ϰ\n\n\t\t\t\t\t\t\t\t\t\t3.δ��ϰ\n\n\t\t\t\t\t\t\t\t\t\t4.����\n\n\n\t\t\t\t\t\t\t\t\t\t������Ҫ�鿴�����:");
goto gpt;
}

}

else if(y==3)
{int x,n;
char ccdd[100];
char da[2]={00};
op:system("cls");
printf("\n        ��������������������������������������������������������������������  �� ��  �� ��  ��������������������������������������������������������������������������������������������\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\t������Ҫ�鿴�ĵ��ʰ��:");
dp:fflush(stdin);printf("\n\t\t\t\t\t\t\t\t\t\t");scanf("%d",&x);
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("\n\t\t\t\t\t\t\t\t\t\t������Դ����ٴ�����Ҫ�鿴�ĵ��ʰ��:");goto  dp;}
system("cls");
printf("\n        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
printf("\n\t\t\t\t\t\t\t\t\t\t���%d��������(%d��)\n\n",x,n);
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
for(i=0;i<n;i++)
{printf("\t\t%-50s%-100s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
}printf("\n");
}
fflush(stdin);printf("\n\n\t\t\t\t\t\t\t\t\t\t�����������");getch();goto op;

}
else
{printf("\t\t\t\t\t\t\t\t\t\t������Դ����ٴ�����Ҫ��ϰ�İ��:");goto  cf;}

}




int danci1(danci dc[N])
{int n;
n=0;
if((fp=fopen("danc1.txt","r"))==NULL)
{printf("�����ڴ�");exit(0);}
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
{printf("�����ڴ�");exit(0);}
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
{printf("�����ڴ�");exit(0);}
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
{printf("�����ڴ�");exit(0);}
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
{printf("�����ڴ�");exit(0);}
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
{printf("�����ڴ�");exit(0);}
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
{printf("�����ڴ�");exit(0);}
while(!feof(fp))
{fscanf(fp,"%50s%4d%100s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fp);
return n;
}

/*�������*/
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