#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;
class Bank
{
public:
    Bank()//Ĭ�Ϲ��캯��������ʼ��
    {
        name="xiaoming";
        cardID=123;
        IC=111111;
        psw=123;
        money=1000;
    }
    void UserLogin();//�����û���¼����
    void Account();//������������
    void Menus();//�����û���������
    void SaveMoney();//��������
    void TakeMoney();//����ȡ���
    void Inquiry();//������ѯ����
    void Transfer();//����ת�˺���
    void Changepsw();//�����޸����뺯��
private:
    string name;
    double cardID;
    double IC;
    double psw;
    int money;
};
void Bank::UserLogin()//�����û���¼����
{
    double ID;
    double psw1;
    cout<<setw(20)<<"�û���¼��"<<endl;
    cout<<"���������Ŀ��ţ�"<<endl;
    cin>>ID;
    cout<<"�������������룺"<<endl;
    cin>>psw1;
    if(ID==cardID&&psw1==psw)
    {
        Menus();
    }
    else
    {
        cout<<"��������˳�������"<<endl;
        exit(1);
    }
}
void Bank::Menus()//�����û���������
{
    int a;
    do
    {
        cout<<"*****************************"<<endl;
        cout<<"*         1.���            *"<<endl;
        cout<<"*         2.ȡ��            *"<<endl;
        cout<<"*         3.��ѯ���        *"<<endl;
        cout<<"*         4.�޸�����        *"<<endl;
        cout<<"*         5.ת��            *"<<endl;
        cout<<"*         6.�˳�ϵͳ        *"<<endl;
        cout<<"*****************************"<<endl;
        cout<<"��������Ҫ����ҵ�����ţ�";
        cin>>a;
        switch (a)
        {
            case 1:SaveMoney();
            break;
            case 2:TakeMoney();
            break;
            case 3:Inquiry();
            break;
            case 4:Changepsw();
            break;
            case 5:Transfer();
            break;
            case 6:exit(0);
            break;
            default:
            {cout<<"�����������������1-6֮���������"<<endl;}
        }
        cout<<"##############################################"<<endl;
    }
    while(1);
}
void Bank::Account()//���忪������
{
    cout<<"��ӭ������"<<endl;
    cout<<"����������������"<<endl;
    cin>>name;
    cout<<"���������֤���룺"<<endl;
    cin>>IC;
    cout<<"���������Ŀ��ţ�"<<endl;
    cin>>cardID;
    cout<<"�������������룺"<<endl;
    cin>>psw;
    cout<<"����������Ԥ���"<<endl;
    cin>>money;
    cout<<"��ϲ���������ɹ���"<<endl;
}
void Bank::SaveMoney()//�������
{
    int money1;
    cout<<"��ӭ��ʹ�ô��ҵ��"<<endl;
    cout<<"���������Ĵ���"<<endl;
    cin>>money1;
    money=money+money1;
    cout<<"���ɹ����������Ϊ��"<<money<<endl;
}
void Bank::TakeMoney()//����ȡ���
{
    int money1;
    cout<<"��ӭ��ʹ��ȡ��ҵ��"<<endl;
    cout<<"ÿ��ȡ��ܳ���5000Ԫ"<<endl;
    cout<<"��������ȡ��Ľ�"<<endl;
    cin>>money1;
    if(money1>5000)
    {
        cout<<"ÿ��ȡ��ܳ���5000Ԫ"<<endl;
        cout<<"ȡ������˻�������������ȡ���";
        cin>>money1;
    }
    if(money>=money1)
    {
        money=money-money1;
        cout<<"ȡ��ɹ������������Ϊ��"<<money<<endl;
    }
    else
    {
        cout<<"ȡ������˻�������������ȡ���";
        cin>>money1;
        money=money-money1;
        cout<<"ȡ��ɹ������������Ϊ��"<<money<<endl;
    }
}
void Bank::Inquiry()//�����ѯ����
{
    cout<<"��ӭ���в�ѯ���ҵ��"<<endl;
    cout<<"�������Ϊ��"<<money<<endl;
}
void Bank::Transfer()//����ת�˺���
{
    double ID2;
    int money1;
    cout<<"��ӭʹ��ת��ҵ��"<<endl;
    cout<<"ÿ��ת�˲��ܳ���5000Ԫ"<<endl;
    cout<<"��������Ҫת�˵Ŀ��ţ�"<<endl;
    cin>>ID2;
    cout<<"��������Ҫת�˵Ľ��:"<<endl;
    cin>>money1;
    if(money1>5000)
    {
        cout<<"ÿ��ת�˽��ܳ���5000Ԫ"<<endl;
        cout<<"ת�˽����˻�������������ת�˽�"<<endl;
        cin>>money1;
    }
    if(money>=money1)
    {
        money=money-money1;
        cout<<"ת�˳ɹ������������Ϊ��"<<money<<endl;
    }
    else
    {
        cout<<"�����˻�������������ת�˽�";
        cin>>money1;
        money=money-money1;
        cout<<"ת�˳ɹ������������Ϊ��"<<money<<endl;
    }
}
void Bank::Changepsw()//�����޸����붨��
{
    double ID;
    double psw1;
    double psw2;
    cout<<"��ӭʹ���޸�����ҵ��"<<endl;
    cout<<"���������Ŀ��ţ�"<<endl;
    cin>>ID;
    cout<<"�������������룺"<<endl;
    cin>>psw1;
    if(ID==cardID&&psw1==psw)
    {
        cout<<"����������ԭʼ���룺"<<endl;
        cin>>psw1;
        cout<<"���������������룺"<<endl;
        cin>>psw2;
        psw=psw2;
        cout<<"�޸�����ɹ���"<<endl;
    }
    else
    {
        cout<<"���Ŀ��Ż��������"<<endl;
        cout<<"��������������ԭʼ���룺"<<endl;
        cin>>psw1;
        if(psw1==psw)
        {
            cout<<"���������������룺"<<endl;
            cin>>psw2;
            cout<<"ȷ�������룺�����������룺"<<endl;
            cin>>psw2;
            psw=psw2;
            cout<<"�޸�����ɹ���"<<endl;
        }
        else
        {
            cout<<"��ܰ��ʾ��������󣡣���"<<endl;
            exit(1);
        }
    }
}
int main()
{
    int i;
    Bank obj;
    do
    {
        cout<<"��ӭ������������"<<endl;
        cout<<"��ѡ����Ҫ�����������"<<endl;
        cout<<"*****************************"<<endl;
        cout<<"*         1.����            *"<<endl;
        cout<<"*         2.�û���¼        *"<<endl;
        cout<<"*         3.�˳�ϵͳ        *"<<endl;
        cout<<"*****************************"<<endl;
        cout<<"��������Ҫ����ҵ�����ţ�";
        cin>>i;
        if(3==i)
        {
            break;
        }
        switch(i)
        {
            case 1:obj.Account();
            break;
            case 2:obj.UserLogin();
            break;
            default:
            {cout<<"������������������1-3֮���������"<<endl;}
        }
    }
    while(1);
    return 0;
}
