#define SEQUENCELIST_H_INCLUDED
#ifndef SEQUENCELIST_H_INCLUDED
#endif // SEQUENCELIST_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"

/*
1.��ʼ������
@param seqLiat Ҫ��ʼ����˳���
@param elemArray ��ʼ��ʱҪ��ӵ�Ԫ����������
@param length ��ʼ��ʱ��ӵ�Ԫ�ظ���

*/
void InitList(SeqList *seqList,ElementType *elemArray,int length);
/*
��˳����е�index�±괦����ĳ��Ԫ��
@param seqList 
@param index Ҫ������±�
@param element Ҫ�����Ԫ��
*/
void InsertElement(SeqList *seqList, int index, ElementType element);
void PrintList(SeqList * seqli)
