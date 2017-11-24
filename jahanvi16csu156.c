//jahanvi kaushik
//16csu156
//Departmental store
#include<stdio.h>
int f=-1,r=-1,n,i,j;
char q[10][20];
void insert(char name[])
{
	if((f==0&&r==n-1)||(f==r+1))
	{
		printf("\n\tOOOPS Queue is full !!\n ### No more customers ###");
	}
	if(f==-1)
	{
		f=0;r=0;
	}
	else if(r==n-1)
	{
		r=0;
	}
	else
	{
		r++;
	}
	strcpy(q[r],name);
}
void deleter()
{
	char name[10];
	if(f==-1)
	{
		printf("\n\tDONE!!\n\t\t\t*******All customers entertained*******");
	}
		strcpy(name,q[f]);
		

	if(f==r)
	{
	 	f=-1;r=-1;
	}
	else if(f==n-1)
	{
	 	f=0;
	}
	else
	{
		f++;
	       
	}

}
void display()
{       j=1;
	if(f==-1)
	{
		printf("\n\t\tNo customers in the list\n");
	}
	else
	{
		printf("\n\tSno.\tName\n");
		if(f<=r)
		{
			for(i=f;i<=r;i++)
			{
				printf("\t%d%2d",j++,i);
				printf("\t%s",q[i]);
				printf("\n");
			}
		}
		else if(f>r)
		{
			for(i=f;i<=n-1;i++)
		       {
				printf("\t%d",j++);
				printf("%s",q[i]);
				printf("\n");
		       }  j=n;
			for(i=0;i<=r;i++)
		       {
				printf("\t%d",j++);
				printf("%s",q[i]);
				printf("\n");
		       }
		}
	}
}
void main()
{
	int ch,k=1;
	printf("\t\t********** WELCOME TO FOREVER 21 STORE *********\n");
	printf("\t\tFirst come first serve\n\n\n");
while(k!=0)
{
	printf("\n\n1. Add customers\n2. Move forward\n3. Display the list\n4. Exit\n");
	printf("Choose the option: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
	       {
		printf("\nEnter customer's name: ");
		scanf("%s",q);
		insert(q);
		printf("Want to continue press 1 : ");
		scanf("%d",&k);
	       }
		break;

		case 2:
		deleter();
		printf("Want to continue press 1 : ");
		scanf("%d",&k);
		break;
                    	case 3:
		display();
		printf("Want to continue press 1 : ");
		scanf("%d",&k);
		break;
 		case 4:
		exit(0);
		break;
default:{printf("\nInvalid option !!");}
}
}}

                                          
 

