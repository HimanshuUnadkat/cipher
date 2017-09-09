#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char ct[100],pt[100];
	int i,n,key,x,y;
	
	printf("enter plain text:");
	scanf("%s",pt);
	n=strlen(pt);
	
	printf("enter key:");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{	
			if(pt[i]>=65&&pt[i]<=90)
			{
				ct[i]=((pt[i]-65+key)%26)+65;
			}
		
			//if(pt[i]>=97&&pt[i]<=122) 
			else
			{
				ct[i]=((pt[i]-97+key)%26)+97;
			}
	}
		ct[i]='\0';
	
		printf("\ncipher text is %s",ct);
	
		for(i=0;i<n;i++)
		{
			
			{
				if(ct[i]>=65&&ct[i]<=90)
				{
					y=(ct[i]-65-key);
					if(y<0)
					{
						y=y+26;
					}
					pt[i]=(y%26)+65;
				}
		
				//if(ct[i]>=97&&ct[i]<=122)
				else
				{
					y=(ct[i]-97-key);
					if(y<0)
					{
						y=y+26;
					}
					pt[i]=(y%26)+97;
				}
			}
		}
			pt[i]='\0';
	
			printf("\nplain text is %s",pt);
		
			getch();
}
