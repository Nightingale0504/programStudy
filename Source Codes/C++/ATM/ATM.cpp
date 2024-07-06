#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;
class Bank
{
public:
    Bank()//默认构造函数，并初始化
    {
        name="xiaoming";
        cardID=123;
        IC=111111;
        psw=123;
        money=1000;
    }
    void UserLogin();//声明用户登录函数
    void Account();//声明开户函数
    void Menus();//声明用户操作函数
    void SaveMoney();//声明存款函数
    void TakeMoney();//声明取款函数
    void Inquiry();//声明查询函数
    void Transfer();//声明转账函数
    void Changepsw();//声明修改密码函数
private:
    string name;
    double cardID;
    double IC;
    double psw;
    int money;
};
void Bank::UserLogin()//定义用户登录函数
{
    double ID;
    double psw1;
    cout<<setw(20)<<"用户登录："<<endl;
    cout<<"请输入您的卡号："<<endl;
    cin>>ID;
    cout<<"请输入您的密码："<<endl;
    cin>>psw1;
    if(ID==cardID&&psw1==psw)
    {
        Menus();
    }
    else
    {
        cout<<"密码错误，退出！！！"<<endl;
        exit(1);
    }
}
void Bank::Menus()//定义用户操作函数
{
    int a;
    do
    {
        cout<<"*****************************"<<endl;
        cout<<"*         1.存款            *"<<endl;
        cout<<"*         2.取款            *"<<endl;
        cout<<"*         3.查询余额        *"<<endl;
        cout<<"*         4.修改密码        *"<<endl;
        cout<<"*         5.转账            *"<<endl;
        cout<<"*         6.退出系统        *"<<endl;
        cout<<"*****************************"<<endl;
        cout<<"请输入您要办理业务的序号：";
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
            {cout<<"你的输入有误，请输入1-6之间的整数！"<<endl;}
        }
        cout<<"##############################################"<<endl;
    }
    while(1);
}
void Bank::Account()//定义开户函数
{
    cout<<"欢迎开户："<<endl;
    cout<<"请输入您的姓名："<<endl;
    cin>>name;
    cout<<"请输入身份证号码："<<endl;
    cin>>IC;
    cout<<"请输入您的卡号："<<endl;
    cin>>cardID;
    cout<<"请输入您的密码："<<endl;
    cin>>psw;
    cout<<"请输入您的预存金额："<<endl;
    cin>>money;
    cout<<"恭喜您，开户成功！"<<endl;
}
void Bank::SaveMoney()//定义存款函数
{
    int money1;
    cout<<"欢迎您使用存款业务"<<endl;
    cout<<"请输入您的存款金额："<<endl;
    cin>>money1;
    money=money+money1;
    cout<<"存款成功，卡上余额为："<<money<<endl;
}
void Bank::TakeMoney()//定义取款函数
{
    int money1;
    cout<<"欢迎您使用取款业务"<<endl;
    cout<<"每次取款不能超过5000元"<<endl;
    cout<<"请输入您取款的金额："<<endl;
    cin>>money1;
    if(money1>5000)
    {
        cout<<"每次取款不能超过5000元"<<endl;
        cout<<"取款金额超出账户余额，请重新输入取款金额：";
        cin>>money1;
    }
    if(money>=money1)
    {
        money=money-money1;
        cout<<"取款成功，您卡上余额为："<<money<<endl;
    }
    else
    {
        cout<<"取款金额超出账户余额，请重新输入取款金额：";
        cin>>money1;
        money=money-money1;
        cout<<"取款成功，您卡上余额为："<<money<<endl;
    }
}
void Bank::Inquiry()//定义查询余额函数
{
    cout<<"欢迎进行查询余额业务"<<endl;
    cout<<"卡上余额为："<<money<<endl;
}
void Bank::Transfer()//定义转账函数
{
    double ID2;
    int money1;
    cout<<"欢迎使用转账业务"<<endl;
    cout<<"每次转账不能超过5000元"<<endl;
    cout<<"请输入您要转账的卡号："<<endl;
    cin>>ID2;
    cout<<"请输入您要转账的金额:"<<endl;
    cin>>money1;
    if(money1>5000)
    {
        cout<<"每次转账金额不能超过5000元"<<endl;
        cout<<"转账金额超出账户余额，请重新输入转账金额："<<endl;
        cin>>money1;
    }
    if(money>=money1)
    {
        money=money-money1;
        cout<<"转账成功，您卡上余额为："<<money<<endl;
    }
    else
    {
        cout<<"金额超出账户余额，请重新输入转账金额：";
        cin>>money1;
        money=money-money1;
        cout<<"转账成功，您卡上余额为："<<money<<endl;
    }
}
void Bank::Changepsw()//定义修改密码定义
{
    double ID;
    double psw1;
    double psw2;
    cout<<"欢迎使用修改密码业务"<<endl;
    cout<<"请输入您的卡号："<<endl;
    cin>>ID;
    cout<<"请输入您的密码："<<endl;
    cin>>psw1;
    if(ID==cardID&&psw1==psw)
    {
        cout<<"请输入您的原始密码："<<endl;
        cin>>psw1;
        cout<<"请输入您的新密码："<<endl;
        cin>>psw2;
        psw=psw2;
        cout<<"修改密码成功！"<<endl;
    }
    else
    {
        cout<<"您的卡号或密码错误！"<<endl;
        cout<<"请重新输入您的原始密码："<<endl;
        cin>>psw1;
        if(psw1==psw)
        {
            cout<<"请输入您的新密码："<<endl;
            cin>>psw2;
            cout<<"确认新密码：请输入新密码："<<endl;
            cin>>psw2;
            psw=psw2;
            cout<<"修改密码成功！"<<endl;
        }
        else
        {
            cout<<"温馨提示：密码错误！！！"<<endl;
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
        cout<<"欢迎进入人民银行"<<endl;
        cout<<"请选择您要办理的手续："<<endl;
        cout<<"*****************************"<<endl;
        cout<<"*         1.开户            *"<<endl;
        cout<<"*         2.用户登录        *"<<endl;
        cout<<"*         3.退出系统        *"<<endl;
        cout<<"*****************************"<<endl;
        cout<<"请输入您要办理业务的序号：";
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
            {cout<<"您的输入有误，请输入1-3之间的整数！"<<endl;}
        }
    }
    while(1);
    return 0;
}
