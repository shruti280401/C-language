#include<stdio.h>
#include<conio.h>
#include<string.h>
struct library
{
	int assno,price;
	char title[20],author[20];
};
void main()
{
	struct library b[5];
	int i,n,a,l,count=0,j;
	char str[20];
	clrscr();
	while(1)
	{
		printf("\n1.add book info \n 2.display book info \n 3.list all books of given author\n 4.list the title of specified book \n 5.list the cout of books in the library\n 6.list the books in order of accession no\n 7.exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("enter the no of books to be entered:");
				scanf("%d",&l);
				for(i=0;i<=l;i++)
				{
					printf("\nenter accession no.,title,authoe name,price of book:");
					scanf("%d %s %s %d",&b[i].assno,&b[i].title,&b[i].author,&b[i].price);
				}
				break;
			case 2:
				for(i=0;i<=l;i++)
				{

					printf("%d %s %s %d",&b[i].assno,&b[i].title,&b[i].author,&b[i].price);
					printf("\n");
				}
				break;
			case 3:
				printf("enter author name:");
				scanf("%s",&str);
				for(i=0;i<=l;i++)
				{
					if(strcmp(str,b[i].author)==0)
					{
						printf("%s\n",b[i].title);
					}
					printf("\n");
				}
				break;
			case 4:
				printf("enter assession no:");
				scanf("%d",&a);
				for(i=0;i<=l;i++)
				{
					if(a==b[i].assno)
					{
						printf("%s",b[i].title);
						break;
					}

				}
				break;
			 case 5:
				for(i=0;i<=l;i++)
				{
					count++;
				}
				printf("%d\n",count);
				break;
			 case 6:
				for(i=0;i<=l;i++)
				{
					for(j=i+1;j<=l;j++)
					{
						if(b[i].assno>b[j].assno)
						{
							n=b[i].assno;
							b[i].assno=b[j].assno;
							b[j].assno=n;
						 }

					 }
					 printf("%s\n",b[i].title);
				 }
				 break;
			  case 7:
				exit(0);
			  default:
				printf("invalid entry");
		}
		getch();
	}
}



