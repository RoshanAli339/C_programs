#include<stdio.h>
void display(int a[15],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void insert(int a[15],int n)
{
	int x,p,i,j,m;
	printf("Enter the element to insert:");
	scanf("%d",&x);
	printf("Enter the position of insertion:");
	scanf("%d",&p);
	m=n+1;
		for(j=m-1;j>=p;j--)
			a[j]=a[j-1];
		a[p-1]=x;
	display(a,m);
}
void delete(int a[15],int n)
{
	int i,x,j,m,f=0;
	printf("Enter the element to delete in array:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
    {
	    if(a[i]==x)
	    {
		    for(j=i;j<n;j++)
		        a[j]=a[j+1];
		    m=n-1;
		    display(a,m);
	    }
	    else
        {
		    f++;
        }
    }
	if(f==n)
	    printf("Element is not found");
}
void duplicate(int a[15],int n)
{
	int j,i,k,l;
	for(i=0;i<n;i++)
    {
	    for(j=i+1;j<n;j++)
        {
		    if(a[i]==a[j])
			    {
				    for(l=j;l<n;l++)
				      a[l]=a[l+1];
				    n--;
				    k--;
			    }
        }
    }
	printf("Elements in array after deletion of duplicates:");
	for(k=0;k<n;k++)
	printf("%d ",a[k]);
}
int main()
{
	int i,j,a[15],n,k,ch;
	printf("Enter number of elements into array:");
	scanf("%d",&n);
	printf("Enter the %d elemenys into array:",n);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	k=0;
	while(k!=1)
	{
	    printf("\n___~~MENU~~____");
	    printf("\n1.Insertion of element\n2.Deletion of element\n3.Print elements\n4.Removing of duplicate\n5.Quit\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
		    case 1:
			    insert(a,n);
			    break;
		    case 2:
			    delete(a,n);
			    break;
		    case 3:
			    display(a,n);
			    break;
		    case 4:
			    duplicate(a,n);
			    break;
		    case 5:
			    return k=1;
	    }
	}
}
