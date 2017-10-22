
#include <cstring>
#include <cstdio>
#include <cstdlib>


char glb_src[50];

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


int main()
{
    //测试未初始化的全局数组 
    int i;
    printf("Global:");	
	for(i = 0;i < 50;i++)
	{
        printf("%d ",glb_src[i]);        
    }
    printf("\n");
    
    //测试未初始化的局部数组 
    char src[50];
    printf("Src:");
	for(i = 0;i < 50;i++)
	{
        printf("%d ",src[i]);        
    }    
    printf("\n");  
    
    //测试已经初始化的局部数组 
    char src2[50] = "a";
    printf("Src2:");
	for(i = 0;i < 50;i++)
	{
        printf("%d ",src2[i]);        
    }    
    printf("\n"); 
    
    //testChar();
	//testMemcpy();
}


