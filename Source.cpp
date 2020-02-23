#include <stdio.h>
#include <time.h>
#include<windows.h>

int main()
{


	time_t s;
	int a,b,c;
	int i;
	int j;
	int k;
    int z;
    s=time(NULL);


    time_t orginal_time;
    struct tm *tm_p;
    orginal_time = time( NULL );
    tm_p = localtime( &orginal_time );
    int e=tm_p->tm_sec;
	int r=tm_p->tm_min;
	int t=tm_p->tm_hour;

    printf("if you want to set your time\n");
    Sleep(2000);
    printf("Please input 1 then press Enter\n");
    Sleep(2000);
    printf("if you want to get local time\n");
    Sleep(2000);
    printf("Please input 2 then press Enter\n");
    Sleep(2000);
    printf("Enter your input:");
    scanf("%d",&z);
    if(z==1){
    printf("Enter seconds:");
	scanf("%d",&a);
	if(a>60&&0<a){
        printf("wrong input\n");
        printf("Please enter right input\n");
        printf("Enter seconds:\n");
	    scanf("%d",&a);

	}

    printf("Enter minute:");
	scanf("%d",&b);
	if(b>60&&0<b){
        printf("wrong input\n");
        printf("Please enter right input\n");
        printf("Enter minute:");
        scanf("%d",&b);

	}

	printf("Enter hours:");
	scanf("%d",&c);
	if(c>24&&0<c){
        printf("wrong input\n");
        printf("Please enter right input\n");
        printf("Enter hours:");
        scanf("%d",&c);

	}



    while(1){


    for(k=c;k<24;k++)
    {
      for(j=b;j<60;j++)
        {
            for(i=a;i<60;i++)
            {
                system("cls");

                if(k>=0&&k<=11){

                printf("Hour %d : Munite  %d : Seconds %d",k,j,i);

                }
                else{
                printf("Hour %d : Munite  %d : Seconds %d",k-12,j,i);

                }
                Sleep(1000);

              }
             a=0;
        }
        b=0;
    }
    c=0;
 }

    }
    if(z==2){
    while(1){


    for(k=t;k<24;k++)
    {
      for(j=r;j<60;j++)
        {
            for(i=e;i<60;i++)
            {
                system("cls");

                if(k>=0&&k<=11){

                printf("Hour %d : Munite  %d : Seconds %d",k,j,i);

                }
                else{
                printf("Hour %d : Munite  %d : Seconds %d",k-12,j,i);

                }
                Sleep(1000);

              }
             a=0;
        }
        b=0;
    }
    c=0;
 }

}









	return(0);
}
