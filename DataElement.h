#define DATAELEMENT_H_INCLUDED
#ifndef DATAELEMENT_H_INCLUDED
#endif // DATAELEMENT_H_INCLUDED
#define MAX_SIZE 255
//1.��������Ԫ��
//datas={{1,""},{2,""},{3,""}}
typedef struct{
	int id;
	char *name;
}ElementType;
//2.����˳���ṹ
typedef struct{
	ElementType data[MAX_SIZE];//˳����е�����Ԫ�ؼ���
	int length;                //��ǰ˳����е�Ԫ�ظ���
}SeqList;
