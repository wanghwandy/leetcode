#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <map>
#include <stack>
#include "data_struct.h"
using namespace std;
#define _INT_MAX  2147483647 //int 的最大值
#define _INT_MIN (-INT_MAX - 1) //int 的最小值

class leet_code_solution{
public :
	/*Questoin:179 Largest Number
	  Description:Given a list of non negative integers, 
	  arrange them such that they form the largest number.
	  For example, given [3, 30, 34, 5, 9], the largest formed number is 9534330.
	  Note: The result may be very large, so you need to return a string instead of an integer.		
	*/
	string largestNumber(vector<int> &num);
	/*Question:1 Two Sum
		Description:Given an array of integers, find two numbers such that they add up to a specific target number.
		The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
		You may assume that each input would have exactly one solution.
		Input: numbers={2, 7, 11, 15}, target=9
		Output: index1=1, index2=2 
	*/
	vector<int> twoSum(vector<int> &numbers,int target);
	/*Question:8 String to integer(atoi)
	  Description:mplement atoi to convert a string to an integer.
	  Hint: Carefully consider all possible input cases. 
			If you want a challenge, please do not see below and ask yourself what are the possible input cases.
	  Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). 
			 You are responsible to gather all the input requirements up front. 
	*/
	int my_atoi(const char *str);
	/*Question:7 Reverse Integer
	  Description:Reverse digits of an integer.
	  Example1: x = 123, return 321
	  Example2: x = -123, return -321
	*/
	int my_reverse_int(int x);
	/*Question:
	  Description:You are given two linked lists representing two non-negative numbers. 
	  The digits are stored in reverse order and each of their nodes contain a single digit. 
	  Add the two numbers and return it as a linked list.
	  Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
      Output: 7 -> 0 -> 8
	*/
	struct ListNode *addTwoNumbers(struct ListNode *l1,struct ListNode *l2);
private:
	static bool compar_str(string str1, string str2);

};