#ifndef ALGORITHM_H
#define ALGORITHM_H

#pragma once
#pragma execution_character_set("utf-8")
/*
description:�ֵ���ȫ����
Date:2016/03/10
author:NFX
@src:Դ�ַ���
*/
void dictSort(char* src);
/*
description:KMP�ַ���ƥ��
Date:2016/03/10
author:NFX
@src:Դ�ַ��� @pattern��ģʽ��
*/
int kmp(char* src,char* pattern);

struct BSTreeNode
{
	int data;
	BSTreeNode* left;
	BSTreeNode* right;
};

bool createBSTree(BSTreeNode *&root, int value);
void preVisit(BSTreeNode *&root);
void inVisit(BSTreeNode *&root);
void postVisit(BSTreeNode *&root);
void tranformBSTreeToList(BSTreeNode *&root);
#endif