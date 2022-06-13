#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#define N 500
/*µ¥´Ê*/
typedef struct danci
{char danc[50];
int shunx;
char yisi[100];
}DANCI;
/*ÉùÃ÷*/
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

/*±³¾°ÑÕÉ«*/
system("color B0");

/*printf("\n\t\t\t\t\t\t\t\t\t\t°å¿éÒ»µ¥´Ê×ÜÀÀ\n\n");*/
bb:system("cls");
printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
printf("\n\t\t\t\t\t\t\t\t\t  »¶  Ó­  Ê¹  ÓÃ  Áú  Áú  ÅÆ  µ¥  ´Ê  ¸´  Ï°  \n\n\n\t\t\t\t\t\t\t\t\t\t1.µ¥´Ê¸´Ï°\n\n\t\t\t\t\t\t\t\t\t\t2.²é¿´µ±Ìì¸´Ï°Çé¿ö\n\n\t\t\t\t\t\t\t\t\t\t3.µ¥´Ê×ÜÀÀ\n\n\n\t\t\t\t\t\t\t\t\t\t\b£¨±¾³ÌÐò°´00Ò»ÂÉ»Øµ½Ö÷Ò³Ãæ¡££©\n");
if(mc==0)   {printf("\n\t\t\t\t\t\t\t\t\t×¢Òâ£ºÈ«ÆÁ ¡ú Enter ¡ú ÊäÈë¡¾1»ò2»ò3¡¿Ö®ºó£¬»Ø³µ½øÈë¡£"); getch();mc++;}
cf:printf("\n\t\t\t\t\t\t\t\t\t\t");scanf("%d",&y);fflush(stdin);

if(y==1)
{int x,n,a,i,m,j,dui,cuo,bk,min,max;
int hu[500];
int gg[500];
char ccdd[50];
int vc[5][4]={{1,4,7,10},{1,4,7,10},{1,4,7,10},{1,4,7,10},{1,4,7,10}};
/*int vc[5][4]={{1,67,138,208},{1,40},{1},{1},{1},{1}};*/                                  //////////////////////////////////////////////////////////////////////////
hh:system("cls");
printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª  µ¥ ´Ê  ¸´ Ï°  ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\tÇëÊäÈëÒª¸´Ï°µÄ°å¿é:");
aa:fflush(stdin);scanf("%d",&x);
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("ÇëÈÏÕæ¶Ô´ý£¡ÔÙ´ÎÊäÈëÒª¸´Ï°µÄ°å¿é:");goto  aa;}

system("cls");

if(x==6||x==7)
{printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª part %d ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.È«Æª\n\n\t\t\t\t\t\t\t\t\t\t2.·µ»Ø\n\n\t\t\t\t\t\t\t\t\t\tÇëÊäÈëÒª¸´Ï°µÄÆªÕÂ:");
abk:fflush(stdin);scanf("%d",&bk);
if(bk==1)  {min=1;max=n;}
else if(bk==2)  goto hh;
else if(bk==00)   goto bb;
else {printf("ÇëÈÏÕæ¶Ô´ý£¡ÔÙ´ÎÊäÈëÒª¸´Ï°µÄ°å¿é:");goto  abk;}
}
else
{printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª part %d ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.ÉÏÆª\n\n\t\t\t\t\t\t\t\t\t\t2.ÖÐÆª\n\n\t\t\t\t\t\t\t\t\t\t3.ÏÂÆª\n\n\t\t\t\t\t\t\t\t\t\t4.È«Æª\n\n\t\t\t\t\t\t\t\t\t\t5.·µ»Ø\n\n\t\t\t\t\t\t\t\t\t\tÇëÊäÈëÒª¸´Ï°µÄÆªÕÂ:");
aak:fflush(stdin);scanf("%d",&bk);
if(bk==1)  {min=vc[x-1][bk-1];max=vc[x-1][bk];}
else if(bk==2)   {min=vc[x-1][bk-1]+1;max=vc[x-1][bk];}
else if(bk==3)  {min=vc[x-1][bk-1]+1;max=vc[x-1][bk];}
else if(bk==4)   {min=vc[x-1][0];max=vc[x-1][3];}
else if(bk==5)   goto hh;
else if(bk==00)   goto bb;
else {printf("ÇëÈÏÕæ¶Ô´ý£¡ÔÙ´ÎÊäÈëÒª¸´Ï°µÄ°å¿é:");goto  aak;}
}

system("cls");
for(i=3;i>0;i--)
{printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
printf("\n\t\t\t\t\t\t\t\tÄãÖ»ÓÐÁ½´ÎµÄ»ú»áÊäÈëµ¥´Ê£¬%dÃëºó½øÈëµ¥´Ê¸´Ï°¡£",i);
Sleep(500);
system("cls");
}

if(x==6||x==7) 
printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª part %d    È«Æª  £¨¹² %d ¸ö£© ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n",x,max-min+1);
else 
	if(bk==1)  printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª part %d    ÉÏÆª  £¨¹² %d ¸ö£© ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n",x,max-min+1);
	else if(bk==2)   printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª part %d    ÖÐÆª  £¨¹² %d ¸ö£© ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n",x,max-min+1);
	else if(bk==3)  printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª part %d    ÏÂÆª  £¨¹² %d ¸ö£© ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n",x,max-min+1);
	else   printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª part %d    È«Æª  £¨¹² %d ¸ö£© ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n",x,max-min+1);

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
{printf("\n\t\t\t\t\t\t\t\t\b\b\b\b¡Ì. %-100s\n",dc[gg[i]-1].yisi);
m=0;
gv:printf("\n\t\t\t\t\t\t\t\t");fflush(stdin);gets(ccdd);

if(ccdd[0]!='0'&&ccdd[1]!='0')   

		if(strcmp(ccdd,dc[gg[i]-1].danc)==0)      {dui++;cishu[x-1][gg[i]-1]=1;}
		else {m++;if(m==1)  goto gv;
		           else {printf("\n\t\t\t\t\t\t\t\tÕýÈ·´ð°¸:%s\n",dc[gg[i]-1].danc);cishu[x-1][gg[i]-1]=m;cuo++;}
		     }
else 
{if((i+1)%10==0)
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n\n");
}
else
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n\n");
}
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
printf("\n\t\t\t\t\t\t\t\t\t\t±¾´ÎÍË³öÇ°\n\n\t\t\t\t\t\t\t\t\t\t¶Ô%d¸ö£¬´í%d¸ö£¬Î´¸´Ï°%d¸ö\n\n\n\t\t\t\t\t\t\t\t\t\t°´ÈÎÒâ¼ü»Øµ½Ö÷Ò³¡£",dui,cuo+1,max-min-dui-cuo-1+1);getch();goto bb;
goto bb;
}

if((i+1)%10==0)
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
}printf("\n"); 
}
if(j%10!=0)
{printf("\n                                                                                                                                                                     %d               \n",j);
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n\n");
}
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
printf("\n\t\t\t\t\t\t\t\t\t\t±¾°å¿éÒÑ¾­¸´Ï°ÍêÁË\n\n\t\t\t\t\t\t\t\t\t\t¶Ô%d¸ö£¬´í%d¸ö£¬Î´¸´Ï°%d¸ö\n\n\n\t\t\t\t\t\t\t\t\t\t°´ÈÎÒâ¼ü»Øµ½Ö÷Ò³¡£",dui,cuo+1,max-min-dui-cuo-1+1);getch();goto bb;

}

else if(y==2)
{int n,x,ma,mb,mc,ki,ra;
ghh:system("cls");
printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª  ¸´ Ï°  Çé ¿ö  ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\tÇëÊäÈëÒª²éÕÒµÄ¸´Ï°µ¥´Ê°å¿éÇé¿ö:");
dd:fflush(stdin);printf("\n\t\t\t\t\t\t\t\t\t\t");scanf("%d",&x);
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("\n\t\t\t\t\t\t\t\t\t\t");printf("ÇëÈÏÕæ¶Ô´ý£¡ÔÙ´ÎÊäÈëÒª²éÕÒµÄ¸´Ï°µ¥´Ê°å¿éÇé¿ö:");goto  dd;}
system("cls");
ma=0;mb=0;mc=0;;
for(i=0;i<n;i++)
if(cishu[x-1][i]==0) ma++;
else if(cishu[x-1][i]==1)  mb++;
else mc++;
printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª part %d ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.´íÌâ\n\n\t\t\t\t\t\t\t\t\t\t2.ÒÑ¸´Ï°\n\n\t\t\t\t\t\t\t\t\t\t3.Î´¸´Ï°\n\n\t\t\t\t\t\t\t\t\t\t4.·µ»Ø\n\n\n\t\t\t\t\t\t\t\t\t\tÇëÊäÈëÒª²é¿´µÄÌâ¿â:");
dpp:fflush(stdin);scanf("%d",&ra);
gpt:
if(ra==1)  
{printf("\n\n");
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
printf("\n\t\t\t\t\t\t\t\t\t\t´íÌâ£¨ÔÙ½ÓÔÙÀ÷£©£º%d\n\n",mc);
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
for(i=0;i<n;i++)
if(cishu[x-1][i]==2)
{printf("\t\t%-50s%-100s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
}printf("\n");
}
}

else if(ra==2)  
{printf("\n\n");
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
printf("\n\t\t\t\t\t\t\t\t\t\tÒÑ¸´Ï°µ¥´Ê£º%d\n\n",mb);
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
for(i=0;i<n;i++)
if(cishu[x-1][i]==1)
{printf("\t\t%-50s%-100s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
}printf("\n");
}
}

else if(ra==3)  
{printf("\n\n");
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
printf("\n\t\t\t\t\t\t\t\t\t\tÎ´¸´Ï°µ¥´Ê£º%d\n\n",ma);
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
for(i=0;i<n;i++)
if(cishu[x-1][i]==0)
{printf("\t\t%-50s%-100s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
}printf("\n");
}
}
else if(ra==4)   goto ghh;
else if(ra==00)   goto bb;
else   {printf("ÇëÈÏÕæ¶Ô´ý£¡ÔÙ´ÎÊäÈëÒª²é¿´µÄÌâ¿â:");goto  dpp;}

fflush(stdin);printf("\n\t\t\t\t\t\t\t\t\t\tÇëÊäÈëÒª²é¿´µÄÌâ¿â:");scanf("%d",&ra);
if(ra==00||ra==1||ra==2||ra==3||ra==4)
{system("cls");
printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª part %d ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n",x);
printf("\n\t\t\t\t\t\t\t\t\t\t1.´íÌâ\n\n\t\t\t\t\t\t\t\t\t\t2.ÒÑ¸´Ï°\n\n\t\t\t\t\t\t\t\t\t\t3.Î´¸´Ï°\n\n\t\t\t\t\t\t\t\t\t\t4.·µ»Ø\n\n\n\t\t\t\t\t\t\t\t\t\tÇëÊäÈëÒª²é¿´µÄÌâ¿â:");
goto gpt;
}

}

else if(y==3)
{int x,n;
char ccdd[100];
char da[2]={00};
op:system("cls");
printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª  µ¥ ´Ê  ×Ü ÀÀ  ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
printf("\n\t\t\t\t\t\t\t\t\t\tpart 1\n\n\t\t\t\t\t\t\t\t\t\tpart 2\n\n\t\t\t\t\t\t\t\t\t\tpart 3\n\n\t\t\t\t\t\t\t\t\t\tpart 4\n\n\t\t\t\t\t\t\t\t\t\tpart 5\n\n\t\t\t\t\t\t\t\t\t\tpart 6\n\n\t\t\t\t\t\t\t\t\t\tpart 7\n\n\n\t\t\t\t\t\t\t\t\t\tÇëÊäÈëÒª²é¿´µÄµ¥´Ê°å¿é:");
dp:fflush(stdin);printf("\n\t\t\t\t\t\t\t\t\t\t");scanf("%d",&x);
if(x==1)  n=danci1(dc);
else if(x==2)   n=danci2(dc);
else if(x==3)   n=danci3(dc);
else if(x==4)   n=danci4(dc);
else if(x==5)   n=danci5(dc);
else if(x==6)   n=danci6(dc);
else if(x==7)   n=danci7(dc);
else if(x==00)  goto bb;
else  {printf("\n\t\t\t\t\t\t\t\t\t\tÇëÈÏÕæ¶Ô´ý£¡ÔÙ´ÎÊäÈëÒª²é¿´µÄµ¥´Ê°å¿é:");goto  dp;}
system("cls");
printf("\n        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
printf("\n\t\t\t\t\t\t\t\t\t\t°å¿é%dµ¥´Ê×ÜÀÀ(%d¸ö)\n\n",x,n);
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
for(i=0;i<n;i++)
{printf("\t\t%-50s%-100s",dc[i].danc,dc[i].yisi);printf("\n");
if((i+1)%10==0)  
{printf("\n                                                                                                                                                                     %d               \n",i+1);
printf("        ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª\n");
}printf("\n");
}
fflush(stdin);printf("\n\n\t\t\t\t\t\t\t\t\t\t°´ÈÎÒâ¼ü·µ»Ø");getch();goto op;

}
else
{printf("\t\t\t\t\t\t\t\t\t\tÇëÈÏÕæ¶Ô´ý£¡ÔÙ´ÎÊäÈëÒª¸´Ï°µÄ°å¿é:");goto  cf;}

}




int danci1(danci dc[N])
{int n;
n=0;
if((fp=fopen("danc1.txt","r"))==NULL)
{printf("¾´ÇëÆÚ´ý");exit(0);}
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
{printf("¾´ÇëÆÚ´ý");exit(0);}
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
{printf("¾´ÇëÆÚ´ý");exit(0);}
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
{printf("¾´ÇëÆÚ´ý");exit(0);}
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
{printf("¾´ÇëÆÚ´ý");exit(0);}
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
{printf("¾´ÇëÆÚ´ý");exit(0);}
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
{printf("¾´ÇëÆÚ´ý");exit(0);}
while(!feof(fp))
{fscanf(fp,"%50s%4d%100s\n",dc[n].danc,&dc[n].shunx,dc[n].yisi);
printf("\n");
n++;
}
fclose(fp);
return n;
}

/*ÊäÈëÊä³ö*/
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