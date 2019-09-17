// 
// Created by Solo_Dance on 9/7/2019. 
 // 
 #include <iostream>
 #include "SCORE.h"


 int main() {
		printf("******************************\n");
	 	printf("       学生成绩管理分析系统        \n");
	 	printf("         Mingfu Yan           \n");
	 	printf("******************************\n\n");
	

		 	// 1. 初始化变量 
		 	int N = 0;
	 	SS *pstu = nullptr;
	

		 	// 2. 从文件中读取学生信息 
		 	pstu = readDataFromFile(&N);
	

		 	//3. 统计：统计各学生总成绩，计算其成绩排名。 
		 	calcuScore(pstu, N);
	

		 	//4.  查询：输入学号可查询某个学生的成绩信息。 
		 	searchGradeInfo(pstu, N);
	

		 	//5. 分析：统计全班学生成绩的均值和标准方差，并对成绩分布简要分析。 
		 	analysisScore(pstu, N);
	

		 	//6. 释放内存空间 
		 	delete pstu;
	
		 	std::cout << "\n\n------欢迎使用学生成绩管理分析系统!再见!--------\n\n";
	getchar();
	 	return 0;
	
}
