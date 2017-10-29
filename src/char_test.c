
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void testStrcpy()
{
	char src[50] = "abaaa";
	char dest[50] = "aaaaaaaa";
	int i = 0;
	
	printf("Dest:");	
	for(i = 0;i < 50;i++)
	{
        printf("%d ",dest[i]);        
    }
    printf("\n");
    
    printf("src:");
	for(i = 0;i < 50;i++)
	{
        printf("%d ",src[i]);        
    }
    printf("\n");
    
    char* p = src + 2;
    strcpy(p,src);
    printf("src:");
    for(i = 0;i < 50;i++)
	{
        printf("%d ",src[i]);        
    }
    printf("\n");        
}

void testMemcpy()
{
    char a[30]="string (a)";
    char b[30]="string\0string";
    int i;
    
    strcpy(a,b);
    
    printf("strcpy():");
    for(i=0;i<30;i++)
        printf("%c",a[i]);
    
    memcpy(a,b,30);
    
    printf("\nmemcpy():");
    for(i=0;i<30;i++)
        printf("%c",a[i]);  
    printf("\n");
}

void testChar()
{
    char src[50];
    char dest[50];
    int i;
    printf("src:");
	for(i = 0;i < 50;i++)
	{
        printf("%d ",src[i]);        
    }    
    printf("\n");  
    
    printf("dest:");
	for(i = 0;i < 50;i++)
	{
        printf("%d ",dest[i]);        
    }
    printf("\n");  
    
    memset(src,255,50);
    printf("src:");
	for(i = 0;i < 50;i++)
	{
        printf("%d ",src[i]);        
    }
    printf("\n"); 
    
    strcpy(dest,src);
    printf("dest:");
	for(i = 0;i < 50;i++)
	{
        printf("%d ",dest[i]);        
    }
    printf("\n");  
    
}

void * memmove(void *dest,const void *src,size_t n)
{
    assert((src!=0)&&(dest!=0)&&(n>0));
    
    char* to = (char*)dest;
    char* from = (char*)src;
    
    if(dest < src)
    {
        int i = 0;
        for(;i<n;i++)
        {
            *to++ = *from++; 
        }
    } else {
        to = to + n - 1;
        from = from + n - 1; 
        while(n>=0)
            *to-- = *from--;
    }        
    return dest;    
} 

int main()
{
    char src[32] = "aaaa";
    char dest[32] = "";
    char* p = memmove(dest,src,32);
    printf("%s\n",p);
 
    //testChar();
	//testMemcpy();
}


