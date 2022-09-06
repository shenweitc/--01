#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"SequenceList.h"
/*
1.��ʼ������
@param seqLiat Ҫ��ʼ����˳���
@param elemArray ��ʼ��ʱҪ��ӵ�Ԫ����������
@param length ��ʼ��ʱ��ӵ�Ԫ�ظ���

*/
void InitList(SeqList *seqList, ElementType *elemArray, int length)
{
	if (length > MAX_SIZE){
		printf("����������������������ʼ��ʧ�ܣ�\n");
		return;
	}
	for (int i = 0; i < length - 1; i++){
		InsertElement(seqList, i, elemArray[i]);
	}
}
/*
��˳����е�index�±괦����ĳ��Ԫ��
@param seqList
@param index Ҫ������±�
@param element Ҫ�����Ԫ��
*/
void InsertElement(SeqList *seqList, int index, ElementType element)
{
	//1����֤������Ԫ�ؿռ��Ƿ񳬹�MAX_SIZE
	//2�������index��ֵӦ����length+1֮��
	if (seqList->length + 1 >= MAX_SIZE){
		printf("��ֵ����������ʧ�ܣ�\n");
		return;
	}
	if (index<0 || index>MAX_SIZE){
		printf("ֻ����������±귶Χ�ڲ���Ԫ�ء�0��%d��\n", MAX_SIZE-1);
		return;
	}
	if (index > seqList->length){
		printf("������±곬�����������󳤶�-1������ʧ�ܣ�\n");
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


