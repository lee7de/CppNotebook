#include <iostream>
using namespace std;
int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;//�����û��²����ֵĴ���
    int guessLimit = 3;//�����û�����
    bool outOfGuesses = false;//�����û�ʣ��Ĳ²���Ϊ������ѭ��
    
    while (secretNum != guess && !outOfGuesses) {
        if (guessCount < guessLimit) {
            cout<<"input a number: "<<endl;
            cin>> guess;
            guessCount++;
        }else {
            outOfGuesses = true;//��guessLimt=3����ѭ��
        }
    }
    if (outOfGuesses) {
        cout << "You lost"<<endl;
    }else{
    cout<<"You are win !"<<endl;
    }
    return 0;
}
