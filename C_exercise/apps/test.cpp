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
		cout << "����������" << endl;
		cin >> guess;
		if (guess > secretNum) cout << "�µĴ���" << endl;
		else  if (guess < secretNum) cout << "�µ�С��" << endl;
		else
		{
			cout << "��¶��ˣ�" << endl;
			return;
		}
	}
}

void advance()
{
	int secretNum = 0, guess=0;
    int guessCount = 0;//�����û��²����ֵĴ���
    int guessLimit = 5;//�����û�����
    bool outOfGuesses = false;//�����û�ʣ��Ĳ²���Ϊ������ѭ��
	srand((unsigned int)time(NULL));
	secretNum = rand() % 100 + 1;
	
    cout << "������һ�����Բ����" << endl;
	cout << "����������" << endl;
    while (1) 
	{
        if (guessCount < guessLimit) 
		{
            cin>> guess;
            if (guess > secretNum) cout << "�µĴ���" << endl;
			else if (guess < secretNum) cout << "�µ�С��" << endl;
            else 
			{
				cout << "��¶��ˣ�"<<endl;
				return;
			}
			guessCount++;      
        }
		else
		{
            cout<<"��Ǹ�����װ���սʧ�ܣ�"<<endl;
			return;//��guessLimt=5����ѭ��
        }
    }
}

int main()
{
	while(1)
	{
		int flag = 0;

		cout << "������Ϸ����������1~100֮����������������ֲ²¿�" << endl;
		cout << "1 ��ʼ������"<< endl;
		cout << "2 ѡ����װ棨��ֻ�ܲ�5�Σ�"<< endl;
		cout << "3 �˳�" << endl << ":";
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
				cout << "���벻�淶�����������룡" << endl;
				break; 
			}
		}
	}

	return 0;
}
