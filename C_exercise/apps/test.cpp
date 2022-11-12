#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void basic()
{
	int secretNum = 0, guess=0;
	srand((unsigned int)time(NULL));
	secretNum = rand() % 100 + 1;
	
	while (1)
	{
		cout << "请输入数字" << endl;
		cin >> guess;
		if (guess > secretNum) cout << "猜的大了" << endl;
		else  if (guess < secretNum) cout << "猜的小了" << endl;
		else
		{
			cout << "你猜对了！" << endl;
			return;
		}
	}
}

void advance()
{
	int secretNum = 0, guess=0;
    int guessCount = 0;//计算用户猜测数字的次数
    int guessLimit = 5;//限制用户次数
    bool outOfGuesses = false;//告诉用户剩余的猜测若为真跳出循环
	srand((unsigned int)time(NULL));
	secretNum = rand() % 100 + 1;
	
    cout << "你现在一共可以猜五次" << endl;
	cout << "请输入数字" << endl;
    while (1) 
	{
        if (guessCount < guessLimit) 
		{
            cin>> guess;
            if (guess > secretNum) cout << "猜的大了" << endl;
			else if (guess < secretNum) cout << "猜的小了" << endl;
            else 
			{
				cout << "你猜对了！"<<endl;
				return;
			}
			guessCount++;      
        }
		else
		{
            cout<<"抱歉，进阶版挑战失败！"<<endl;
			return;//若guessLimt=5跳出循环
        }
    }
}

int main()
{
	while(1)
	{
		int flag = 0;

		cout << "猜数游戏，数字是在1~100之间的整数，输入数字猜猜看" << endl;
		cout << "1 开始基础版"<< endl;
		cout << "2 选择进阶版（你只能猜5次）"<< endl;
		cout << "3 退出" << endl << ":";
		cin >> flag;
		switch(flag)
		{
			case 1:
			{
				basic();
				break;
			}
			case 2:
			{
				advance();
				break;
			}
			case 3:
			{
				return 0;
			}
			
			default:
			{
				cout << "输入不规范，请重新输入！" << endl;
				break; 
			}
		}
	}

	return 0;
}
