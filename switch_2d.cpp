// switch_2d.cpp
#include<iostream>
#include<cmath>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		string word ="word";
		int val = 0;
		int m[8][8] = {
			{0,1,2,3,4,4,0,0} ,
			{1,0,0,0,0,0,0,0} ,
			{2,0,0,0,0,0,0,0} ,
			{3,0,0,0,0,0,0,0} ,
			{4,0,0,0,0,0,0,0} ,
			{4,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0}
		};
		for (r = 0; r < 8; r++){
				for (c = 0; c < 8; c++){
				thechar = cc;
			  val = m[r][c];
				//switch
					switch (val){
						case 1:
							word = "-|-";
							break;
						case 2:
							word = "\\-/"
							break;
						case 3:
							word = "/-\\"
							break;
						case 4:
							word = "***";
							break;
						default:
							word = "-----"
							break;
					}
				// end switch
			}
			cout<<endl;
		}
	return 0;
}
