/*************************************************************************
    > File Name: file.h
    > Author: Haoming Bai
    > Mail: haomingbai@hotmail.com 
    > Created Time: Fri Nov 17 20:55:39 2023
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;



//Count the number of lines of a file
int countline(char *filename)
{
    ifstream ReadFile;
    int n=0;
    string tmp;
    ReadFile.open(filename,ios::in);//ios::in 表示以只读的方式读取文件
    if(ReadFile.fail())//文件打开失败:返回0
    {
        return 0;
    }
    else//文件存在
    {
        while(getline(ReadFile,tmp,'\n'))
        {
            n++;
        }
        ReadFile.close();
        return n;
    }
}



//This function can return the max x coordinate value
int readfile(string filename,int d[][3],int linenum){
	ifstream fin;
	fin.open(filename,ios::in);
	int **n,**p;
	n=(int **)malloc(linenum*sizeof(int *));
	p=n;
	for(int i=0;i<linenum;i++){
		*p=d[i];
		p++;
	}
	int m=0;
	char buff[32];
	while(fin.getline(buff,sizeof(buff))){
		sscanf(buff,"%d %d %d",*n,(*n+1),(*n+2));
		//printf("%d %d %d\n",**n,*(*n+1),*(*n+2));//测试用代码
		if(**n>=m) m=**n;
		if(*(*n+2)>=m) m=*(*n+2);
		n++;
	}
	return m;
}


