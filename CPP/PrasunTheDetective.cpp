#include <stdio.h>
#include <string.h>

int main()
{
	char a[50],b[50];
	int flag=0;
   gets(a);
	gets(b);
	int len1=strlen(a);
	int len2=strlen(b);
	for(int j=0;j<len2;j++)
	   {
			for(int i=0;i<len1;i++)
			{
			   if(tolower(b[j])==tolower(a[i]))
			  {
				  b[j]='~';
			     break;
			  }
			  else if(i==len1-1)
			  {
			    flag=1;
			   
			  }
			}	
		}
if(flag==1)
   printf("NO");
else
   printf("YES");	
return 0;
}