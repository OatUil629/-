#pragma once
#include<iostream>
#include"worker.h"
#include<fstream>

#define FILENAME "empFile.txt"
using namespace std;


class WorkerManager
{
	//��¼�ļ��е���������
	int m_EmpNum;

	//Ա�������ָ��
	Worker** m_EmpArray;

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;



public:

	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�����
	void exitSystem();

	//���ӹ���
	void Add_Emp();

	//�����ļ�
	void save();

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�ж��Ƿ����ְ��
	int IsExist(int id);


	//�޸�ְ��
	void Mod_Emp();


	//����Ա��
	void Find_Emp();


	//����ְ��
	void Sort_Emp();


	//����ļ�
	void Clean_File();

	//��������
	~WorkerManager();

};