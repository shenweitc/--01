#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"SequenceList.h"
/*
1.初始化链表
@param seqLiat 要初始化的顺序表
@param elemArray 初始化时要添加的元素内容数组
@param length 初始化时添加的元素个数

*/
void InitList(SeqList *seqList, ElementType *elemArray, int length)
{
	if (length > MAX_SIZE){
		printf("超出了数组的最大容量，初始化失败！\n");
		return;
	}
	for (int i = 0; i < length - 1; i++){
		InsertElement(seqList, i, elemArray[i]);
	}
}
/*
向顺序表中的index下标处插入某个元素
@param seqList
@param index 要插入的下标
@param element 要插入的元素
*/
void InsertElement(SeqList *seqList, int index, ElementType element)
{
	//1、验证插入后的元素空间是否超过MAX_SIZE
	//2、插入的index的值应该在length+1之内
	if (seqList->length + 1 >= MAX_SIZE){
		printf("数值已满，插入失败！\n");
		return;
	}
	if (index<0 || index>MAX_SIZE){
		printf("只能在允许的下标范围内插入元素【0，%d】\n", MAX_SIZE-1);
		return;
	}
	if (index > seqList->length){
		printf("插入的下标超过了数组的最大长度-1，插入失败！\n");
		return;
	}
	for (int i = seqList->length - 1; i >= index; i--){
		seqList->data[i + 1] = seqList->data[i];
	}
	seqList->data[index] = element;
	seqList->length++;
}
void PrintList(SeqList * seqList){
	for (int i = 0; i < seqList->length; i++){
		printf("%d\t%s\n", seqList->data[i].id, seqList->data[i].name);
	}
}


