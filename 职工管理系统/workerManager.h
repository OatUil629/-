#pragma once
#include<iostream>
#include"worker.h"
#include<fstream>

#define FILENAME "empFile.txt"
using namespace std;


class WorkerManager
{
	//记录文件中的人数个数
	int m_EmpNum;

	//员工数组的指针
	Worker** m_EmpArray;

	//标志文件是否为空
	bool m_FileIsEmpty;



public:

	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出功能
	void exitSystem();

	//增加功能
	void Add_Emp();

	//保存文件
	void save();

	//统计人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//判断是否存在职工
	int IsExist(int id);


	//修改职工
	void Mod_Emp();


	//查找员工
	void Find_Emp();


	//排序职工
	void Sort_Emp();


	//清空文件
	void Clean_File();

	//析构函数
	~WorkerManager();

};