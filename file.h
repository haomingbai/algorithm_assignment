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
        return -1;
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
	int **n,**p,**x;
	n=(int **)malloc(linenum*sizeof(int *));
	p=n;
    x=n;
	for(int i=0;i<linenum;i++){
		*p=d[i];
		p++;
	}
	int m=0;
	char buff[32];
	while(fin.getline(buff,sizeof(buff))){
		sscanf(buff,"%d %d %d",*x,(*x+1),(*x+2));
		//cout<<buff<<endl;
		//printf("%d %d %d\n",**n,*(*n+1),*(*n+2));//测试用代码
		if(**x>=m) m=**x;
		if(*(*x+2)>=m) m=*(*x+2);
		x++;
	}
    free(n);
    fin.close();
	return m;
}


