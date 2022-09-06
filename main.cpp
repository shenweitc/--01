#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"
#include"SequenceList.h"
ElementType dataArray[] = {
		{ 1, "∆Ê“Ï≤© ø" },
		{ 2, "∆Ê“Ï≤© ø" },
		{ 3, "∆Ê“Ï≤© ø" },

};
void TestSequenceList();
int main()
{
	TestSequenceList();
	return 0;
}
void TestSequenceList(){
	SeqList seqList;
	InitList(&seqList, dataArray, sizeof(dataArray) / sizeof(dataArray[0]));
	PrintList(seqList);
}