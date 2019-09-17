#pragma once 
// 
 // Created by Solo_Dance on 9/7/2019. 
 // 


#ifndef SCORE_H
 #define SCORE_H


 #include <iostream>


 /*----------------------------------*
 	   学生信息-结构体设计
 *-----------------------------------*/
 typedef struct student {
	 	char number[20]; // 学号 
	 	char name[20]; // 姓名 
	 	float dailyScore; // 平时成绩 
	 	float testScore; // 实验成绩 
	 	float finalScore; // 期末成绩 
	 	float generalScore; // 总成绩 
	 	int rank; // 排名 
	
}SS;


 /*---------------函数声明-------------------*/
 // 1. 输入：从文件data.txt中读取所有学生成绩信息 
 SS* readDataFromFile(int *N);




 //2. 统计：统计各学生总成绩，计算其成绩排名。 
 void calcuScore(SS stu[], int N);




 //3.  查询：输入学号可查询某个学生的成绩信息。 
 void searchGradeInfo(SS stu[], int N);




 // 4. 分析：统计全班学生成绩的均值和标准方差，并对成绩分布简要分析。 
 void analysisScore(SS stu[], int N);








 #endif
#pragma once
