/*************************************************************************
    > File Name: algorithm.h
    > Author: Haoming Bai
    > Mail: haomingbai@hotmail.com 
    > Created Time: Sat Nov 18 10:28:11 2023
 ************************************************************************/

#include<iostream>
using namespace std;

void data_process(int *bitmap,int *rectan){
	bitmap+=*rectan;
	for(int i=*rectan;i<*(rectan+2);i++){
		if(*bitmap<*(rectan+1)) *bitmap=*(rectan+1);
		//cout<<*bitmap<<" "<<i<<endl;//测试用代码
		bitmap++;
	}
}

//测试用代码
void read_data(int *p,int n){
	for(int i=0;i<n;i++){
		printf("%d.%d ",i,*p);
		p++;
	}
	printf("\n");//
}

void key_vector(int *p,int length){
	int *a=p;
	for(int i=1;i<=length;i++){
		//cout<<a<<endl;//测试用代码
		if(*a==*(a+1)){
			a++;
			continue;
			//cout<<"*a="<<*a<<" *(a+1)="<<*(a+1)<<endl;//测试用代码
		}else{
			printf("%d %d ",i,*(a+1));
		}
		a++;
	}
	printf("\n");
}
