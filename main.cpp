/*************************************************************************
    > File Name: main.cpp
    > Author: Haoming Bai
    > Mail: haomingbai@hotmail.com 
    > Created Time: Sat Nov 18 12:03:05 2023
 ************************************************************************/

#include<iostream>
#include"file.h"
#include"algorithm.h"
using namespace std;

int main(){
	int linenum=countline("inputfile");
	int data[linenum][3];
	int length=readfile("inputfile",data,linenum);
	//cout<<linenum<<endl;//测试用代码
	int bitmap[length+1]={0};
	//cout<<length<<endl;//测试用代码
	for(int i=0;i<linenum;i++) data_process(bitmap,data[i]);
	//read_data(bitmap,length+1);//测试用代码
	key_vector(bitmap,length);
	return 0;
}
