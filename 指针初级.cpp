#include<cstdio>
int main(){
	int a;
	int *p=&a;
	*p=233;
	printf("%d  %d\n",*p,a);
	int g[10];
	for(int i=0;i<10;i++){
		scanf("%d",g+i);
	}
	for(int i=0;i<10;i++){
		printf("%d",*(g+i));
	}
	return 0;
}
