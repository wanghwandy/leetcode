#include <iostream>
#include <vector>
#include <ctime>
#include "leetcode.h"
#include "data_struct.h"
using namespace std;

int main(void){
	//3, 30, 34, 5, 9
	time_t start,end,time;
	start = clock();
	
	leet_code_solution lcs;
	
	end = clock();
	time = end - start;
	cout<<"programe run time:"<<time<<"ms"<<endl;
}