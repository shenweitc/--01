#define DATAELEMENT_H_INCLUDED
#ifndef DATAELEMENT_H_INCLUDED
#endif // DATAELEMENT_H_INCLUDED
#define MAX_SIZE 255
//1.定义数据元素
//datas={{1,""},{2,""},{3,""}}
typedef struct{
	int id;
	char *name;
}ElementType;
//2.定义顺序表结构
typedef struct{
	ElementType data[MAX_SIZE];//顺序表中的数据元素集合
	int length;                //当前顺序表中的元素个数
}SeqList;
