#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int where,x,y;
void print(string a){
    for (int i=0;i<=a.length();++i){
        cout<<a[i];
        Sleep(20);
    }
    Sleep(500);
    return;
}
char qwe;
string mapname[5]={"���в����ǡ�","��ɭ�֡�","��ɭ�����","��ɳĮ��","��ħ���ϳ���"};
string maps[5][20]= {{{"####################"},// 0
                      {"#��#   #           #"},// 1
                      {"#��|   # *         #"},// 2
                      {"#��#   # |         #"},// 3
                      {"####   #           #"},// 4
                      {"#��#   # *         #"},// 5
                      {"#��|   # |        =="},// 6
                      {"#��#   #           @"},// 7
                      {"####   # *        =="},// 8
                      {"#��#   # |         #"},// 9
                      {"#��|   #           #"},// 0
                      {"#��#   # *         #"},// 1
                      {"####   # |         #"},// 2
                      {"#      #           #"},// 3
                      {"#      #           #"},// 4
                      {"#      #           #"},// 5
                      {"#      ####| |######"},// 6
                      {"#               |��#"},// 7
                      {"#               |��#"},// 8
                      {"####################"}},// 9
                     {{" |#######_#####|=O=|"},// 0
                      {"| ##    AAA     VUV#"},// 1
                      {" |###  |=O=|  _  U #"},// 2
                      {" |# ##  VUV  AAA U #"},// 3
                      {" |#  ##  _  |=O=|  #"},// 4
                      {"| #  ## ABA  VUV   #"},// 5
                      {"===  ##|=K=|  U    #"},// 6
                      {"@    ## VUV _ U _  #"},// 7
                      {"===  ##  U AAA AAA #"},// 8
                      {" |#  ##  O|=O=|=O=|#"},// 9
                      {"| #  ##    VUV VUV #"},// 0
                      {" |#  ##     U   U  #"},// 1
                      {" |#  ##     U   U  #"},// 2
                      {"| #  ###           #"},// 3
                      {" |#       _        #"},// 4
                      {"| #  ### AAA       #"},// 5
                      {"| # ##  |=O=|      #"},// 6
                      {" |###    VUV       #"},// 7
                      {" |##      U    U U #"},// 8
                      {"| ########U####U U##"}},// 9
                     {{"###_###########U@U##"},// 0
                      {"# AAA          U U #"},// 1
                      {"#|=O=|             #"},// 2
                      {"# VUV              #"},// 3
                      {"#  U               #"},// 4
                      {"#  U               #"},// 5
                      {"##                 #"},// 6
                      {"         E===D     #"},// 7
                      {"##       N   V     #"},// 8
                      {"#  _     N         #"},// 9
                      {"# AAA    N   A     #"},// 0
                      {"#|=O=|   E===D     #"},// 1
                      {"# VUV  _           #"},// 2
                      {"#  U  AAA _    _   #"},// 3
                      {"# _U |=O=AAA  AAA  #"},// 4
                      {"#AAA  VU|=O=||=O=| #"},// 5
                      {"|=O=|  U VUV  VUV  #"},// 6
                      {"#VUV   U  U    U   #"},// 7
                      {"# U       U    U   #"},// 8
                      {"##U#################"}},// 9
                     {{"##############Z#####"},// 0
                      {"# |O #       ZZ    #"},// 1
                      {"# #��#       ZZZ   #"},// 2
                      {"# ####       ZZZZ  #"},// 3
                      {"#           ZZZZZ  #"},// 4
                      {"#    Z             #"},// 5
                      {"#   ZZ            ##"},// 6
                      {"#  ZZZ             @"},// 7
                      {"#  ZZZZ     Z     ##"},// 8
                      {"#  ZZZZZ    ZZ     #"},// 9
                      {"##         ZZZ     #"},// 0
                      {"          ZZZZ     #"},// 1
                      {"##        ZZZZZ    #"},// 2
                      {"#   Z              #"},// 3
                      {"#  ZZ              #"},// 4
                      {"#  ZZZ             #"},// 5
                      {"#  ZZZZ         ####"},// 6
                      {"# ZZZZZ         |��#"},// 7
                      {"#               |��#"},// 8
                      {"####################"}},// 9
                     {{"####################"},// 0
                      {"#      #     #     #"},// 1
                      {"# ####### #######  #"},// 2
                      {"#               # ##"},// 3
                      {"# ### #### ####    #"},// 4
                      {"# # # #    #  #### #"},// 5
                      {"### # ## ###     # #"},// 6
                      {"#                # #"},// 7
                      {"# ### # ## #    ## #"},// 8
                      {"### # #    ###  #  #"},// 9
                      {"K   # ## ###    # ##"},// 0
                      {"# ###  # #   ####  @"},// 1
                      {"#        #      ####"},// 2
                      {"#####  ##### ####  #"},// 3
                      {"#   #        #     #"},// 4
                      {"# #########  ##### #"},// 5
                      {"#   #  #        #  #"},// 6
                      {"### #  #####  ### ##"},// 7
                      {"#                  #"},// 8
                      {"####################"}}};//9

struct PlayerDec{
    string name;
    int HP,MAXHP;
    int LV,EXP,MAXEXP;
    int ATK,DEF;
    int Money;
    int q1,q2,q3,q4,q5;
    int s1,s2,s3,s4,s5;
    int d1,d2,d3,d4,d5;
    int k1,k2,k3,k4,k5,k6,k7,k8,k9;
};
PlayerDec Player;
void shop1(){
    system("cls");
    print("�������ϰ壺��λ�������ҿ���������ţ������һ�Ѻ������ɣ�");
    system("cls");
    print("1.������������������������������������������������200���");printf("\n");
    print("2.���ֳ�������������������������������������������500���");printf("\n");
    print("3.��ɽ��������������������������������������������800���");printf("\n");
    print("4.�����ǹ����������������������������������������1000���");printf("\n");
    print("5.ʯ���񽣡���������������������������������������2000���");printf("\n");
    qwe=_getch();
    switch (qwe){
        case '1':if (Player.Money>=200)Player.s1++,Player.Money-=200;else cout<<"��λ�͹٣�����Ǯ��������Ƣ���ܺõģ�";break;
        case '2':if (Player.Money>=500)Player.s2++,Player.Money-=500;else cout<<"��λ�͹٣�����Ǯ��������Ƣ���ܺõģ�";break;
        case '3':if (Player.Money>=800)Player.s3++,Player.Money-=800;else cout<<"��λ�͹٣�����Ǯ��������Ƣ���ܺõģ�";break;
        case '4':if (Player.Money>=1000)Player.s4++,Player.Money-=1000;else cout<<"��λ�͹٣�����Ǯ��������Ƣ���ܺõģ�";break;
        case '5':if (Player.Money>=2000)Player.s5++,Player.Money-=2000;else cout<<"��λ�͹٣�����Ǯ��������Ƣ���ܺõģ�";break;
    }
    print("�ݰ�~~~~~~~~~~~~~~~");
    system("cls");
    return;
}
void shop2(){
    system("cls");
    print("���ߵ��ϰ壺��λ���֣�����ô�������磬С�ĸ�Ұ�޴����ˣ�����ķ��������һ��������");
    system("cls");
    print("1.���ľ�����������������������������������������100���");printf("\n");
    print("2.�����ס���������������������������������������200���");printf("\n");
    print("3.������ܡ�������������������������������������500���");printf("\n");
    print("4.̹��Ƥ����������������������������������������1250���");printf("\n");
    print("5.������硤������������������������������������1750���");printf("\n");
    qwe=_getch();
    switch (qwe){
        case '1':if (Player.Money>=100)Player.d1++,Player.Money-=100;else cout<<"��λ�͹٣�����Ǯ���������˰������ȥ��";break;
        case '2':if (Player.Money>=200)Player.d2++,Player.Money-=200;else cout<<"��λ�͹٣�����Ǯ���������˰������ȥ��";break;
        case '3':if (Player.Money>=500)Player.d3++,Player.Money-=500;else cout<<"��λ�͹٣�����Ǯ���������˰������ȥ��";break;
        case '4':if (Player.Money>=1250)Player.d4++,Player.Money-=1250;else cout<<"��λ�͹٣�����Ǯ���������˰������ȥ��";break;
        case '5':if (Player.Money>=1750)Player.d5++,Player.Money-=1750;else cout<<"��λ�͹٣�����Ǯ���������˰������ȥ��";break;
    }
    print("�ݰ�~~~~~~~~~~~~~~~");
    system("cls");
    return;
}
void shop3(){
    system("cls");
    print("���ߵ��ϰ���ҩ�����ꣿ");
    system("cls");
    print("1.���裨�ظ�200��HP������������������������������60���");printf("\n");
    print("2.�����ݺᵤ��ATK��������20�㣩��������������������85���");printf("\n");
    print("3.����ɵ���DEF��������5�㣩����������������������90���");printf("\n");
    print("4.��լ���ֵ���HP��������60�㣩��������������������100���");printf("\n");
    print("5.�׶��죨�����������������ƣ���������������������500���");printf("\n");
    qwe=_getch();
    switch (qwe){
        case '1':if (Player.Money>=60)Player.q1++,Player.Money-=60;else cout<<"��λ�͹٣�����Ǯ������������Ϸ�����";break;
        case '2':if (Player.Money>=85)Player.q2++,Player.Money-=85;else cout<<"��λ�͹٣�����Ǯ������������Ϸ�����";break;
        case '3':if (Player.Money>=90)Player.q3++,Player.Money-=90;else cout<<"��λ�͹٣�����Ǯ������������Ϸ�����";break;
        case '4':if (Player.Money>=100)Player.q4++,Player.Money-=100;else cout<<"��λ�͹٣�����Ǯ������������Ϸ�����";break;
        case '5':if (Player.Money>=500)Player.q5++,Player.Money-=500;else cout<<"��λ�͹٣�����Ǯ������������Ϸ�����";break;
    }
    print("�ݰ�~~~~~~~~~~~~~~~");
    system("cls");
    return;
}
void shop4(){
    system("cls");
    print("�������ˣ�С�磬����𣿴�ָ�������");
    system("cls");
    print("1.��Ѫ����+500HP������������������������������������60���");printf("\n");
    print("2.�����Ԫ����+1000HP��������������������������������200���");printf("\n");
    print("3.���һ������������˺�������������������������������2000���");printf("\n");
    print("4.�����лڷ�������Ʒ�����50000��������˺�����������2500���");printf("\n");
    print("5.������������20000���ϣ�100000�����˺���������������3000���");printf("\n");
    print("6.���������ٷ�֮��ļ���ֱ������������������������5000���");printf("\n");
    print("7.���Ǵ󷨷������500����Ѫ��������������������������1000���");printf("\n");
    print("8.���¾Ž����������˺��ű���������������������������8000���");printf("\n");
    print("9.��ˮ�񹦷�������˺�������������������������������9000���");printf("\n");
    qwe=_getch();
    switch (qwe){
        case '1':if (Player.Money>=60)Player.k1++,Player.Money-=60;else cout<<"��λ�͹٣�����Ǯ���������߿���";break;
        case '2':if (Player.Money>=200)Player.k2++,Player.Money-=200;else cout<<"��λ�͹٣�����Ǯ���������߿���";break;
        case '3':if (Player.Money>=2000)Player.k3++,Player.Money-=2000;else cout<<"��λ�͹٣�����Ǯ���������߿���";break;
        case '4':if (Player.Money>=2500)Player.k4++,Player.Money-=2500;else cout<<"��λ�͹٣�����Ǯ���������߿���";break;
        case '5':if (Player.Money>=3000)Player.k5++,Player.Money-=3000;else cout<<"��λ�͹٣�����Ǯ���������߿���";break;
        case '6':if (Player.Money>=5000)Player.k6++,Player.Money-=5000;else cout<<"��λ�͹٣�����Ǯ���������߿���";break;
        case '7':if (Player.Money>=1000)Player.k7++,Player.Money-=1000;else cout<<"��λ�͹٣�����Ǯ���������߿���";break;
        case '8':if (Player.Money>=8000)Player.k8++,Player.Money-=8000;else cout<<"��λ�͹٣�����Ǯ���������߿���";break;
        case '9':if (Player.Money>=9000)Player.k9++,Player.Money-=9000;else cout<<"��λ�͹٣�����Ǯ���������߿���";break;
    }
    print("�ټ���");
    system("cls");
    return;
}
void sp(){
    system("cls");
    print("�����Ǽ�̳������ǿ�����������������ǻ��Ƴ������з������õ������н�Ǯ������y/n��");
    qwe=_getch();
    if (qwe=='n'){
        system("cls");
        print("���þ���������ɣ�");
        system("cls");
        return;
    }else{
        system("cls");
        print("�㽫���н�����ڼ�̳�ϣ�");printf("\n");
        print("��Ļ���ȫ����ը��");printf("\n");
        print("�����ģ���ʶ�𽥻ָ���");printf("\n");
        print("�ɹ�����");printf("\n");
        Player.ATK*=floor(Player.DEF/10);
        Player.DEF=0;
        Player.Money=0;
        return;
    }
    system("cls");
}
void go(int w){
    switch (w){
        case 0:x=7,y=19;break;
        case 1:{
            if (where==0)
                x=7,y=0;
            else if (where==2)
                x=19,y=16;
            break;
        }
        case 2:{
            if (where==3)
                x=7,y=0;
            else if (where==1)
                x=0,y=16;
            break;
        }
        case 3:{
            if (where==2)
                x=7,y=19;
            else if (where==4)
                x=11,y=0;
            break;
        }
        case 4:x=11,y=19;break;
    }
    where=w;
}
void lvup(){
    if (Player.EXP>=Player.MAXEXP){
        system("cls");
        print("������");
        printf("%d����",Player.EXP/Player.MAXEXP);
        Sleep(1000);
        Player.LV+=Player.EXP/Player.MAXEXP;
        Player.ATK+=(Player.EXP/Player.MAXEXP)*20;
        Player.DEF+=(Player.EXP/Player.MAXEXP)*2;
        Player.EXP%=Player.MAXEXP;
        Player.MAXEXP+=rand()%500;
        Player.MAXHP+=rand()%500;
    }else{
        system("cls");
        print("Ȼ���㲢û������.");
        system("cls");
        return;
    }
}
bool fight_to_jiangshi(){
    system("cls");
    string name="��ʬ";
    int HP=1200,MAXHP=1200,ATK=70,DEF=16;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}        ��ʬ *");printf("\n");
        printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}       |X X| *");printf("\n");
        printf("*  | V | [6]       | O | *");printf("\n");
        printf("*   OVO  ZXZ        CVD  *");printf("\n");
        printf("*  /N N===I     3oo=OOO  *");printf("\n");
        printf("* //N N   I     3oo=SSS  *");printf("\n");
        printf("*// ONO   O         RRR  *");printf("\n");
        printf("*P  UMU             S S  *");printf("\n");
        printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            SS SS *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.����   2.����   3.����  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("��ʮ���ƣ���Ϊ�ϼƣ�");
            system("cls");
            return false;
        }else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*       >  {=}      ��ʬ *");printf("\n");
            printf("*     _/_  [6]      ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*    |O O| {6}     |X X| *");printf("\n");
            printf("*    | V | [6]     | O | *");printf("\n");
            printf("*     OVO  ZXZ      CVD  *");printf("\n");
            printf("*    /N N===I   3oo=OOO  *");printf("\n");
            printf("*   //N N   I   3oo=SSS  *");printf("\n");
            printf("*  // ONO   O       RRR  *");printf("\n");
            printf("*  P  UMU           S S  *");printf("\n");
            printf("*     U U           S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*     D D          SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*       >       //  ��ʬ *");printf("\n");
            printf("*     _/_      ///  ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*    |O O|    ///  |X X| *");printf("\n");
            printf("*    | V |   ///   | O | *");printf("\n");
            printf("*     OVO    //     CVD  *");printf("\n");
            printf("*    /N N===/   3oo=OOO  *");printf("\n");
            printf("*   //N N       3oo=SSS  *");printf("\n");
            printf("*  // ONO           RRR  *");printf("\n");
            printf("*  P  UMU           S S  *");printf("\n");
            printf("*     U U           S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*     D D          SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*       >           ��ʬ *");printf("\n");
            printf("*     _/_           ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*    |O O|         |X X| *");printf("\n");
            printf("*    | V |         | O | *");printf("\n");
            printf("*     OVO    =========== *");printf("\n");
            printf("*    /N N====+========== *");printf("\n");
            printf("*   //N N    =========== *");printf("\n");
            printf("*  // ONO           RRR  *");printf("\n");
            printf("*  P  UMU           S S  *");printf("\n");
            printf("*     U U           S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*     D D          SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(500);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����100��ң�300����ֵ��");
                Player.EXP+=300;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=100;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I   3oo  =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I 3oo    =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N3ooI        =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V ***6]       | O | *");printf("\n");
            printf("*   OV*+o+*Z        CVD  *");printf("\n");
            printf("*  /N *ooo*     3oo=OOO  *");printf("\n");
            printf("* //N *+o+*     3oo=SSS  *");printf("\n");
            printf("*// ONO***O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(500);system("cls");
            if (Player.HP<=0){
                print("�㱻ҧ���ˣ�");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.����%d�Ż�Ѫ����\n",Player.k1);
            printf("w.����%d�������Ԫ����\n",Player.k2);
            printf("e.����%d�����һ�������\n",Player.k3);
            printf("r.����%d�ſ����лڷ���\n",Player.k4);
            printf("t.����%d�ž������\n",Player.k5);
            printf("y.����%d�Ŷ�����\n",Player.k6);
            printf("u.����%d�����Ǵ󷨷���\n",Player.k7);
            printf("i.����%d�Ŷ��¾Ž�����\n",Player.k8);
            printf("o.����%d����ˮ�񹦷���\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("�е�һ���泩��HP+500");Player.HP+=500;}else print("��û�У�");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("�о�һ�����һ��Ŀ������ȫ����HP+1000");Player.HP+=1000;}else print("��û�У�");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("���˫����ʹ�ò�ͬ����ʽ���˺�������");Player.ATK*=2;}else print("��û�У�");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("�Ʒ�һ���Ӻ��˳�ȥ��������ѣ�");sd=rand()%50000+1;HP-=sd;}else print("��û�У�");break;
                case 't':if (Player.k5>=1){Player.k5--;print("һ�ɾ޴���������˳�����");sd=rand()%80000+20000;HP-=sd;}else print("��û�У�");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("��꣡����");if ((rand()%21)%10==0)HP=0;}else print("��û�У�");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("�����񹦣�������");HP-=500;Player.HP+=500;}else print("��û�У�");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("���¾Ž���������أ�");Player.ATK*=9;};break;
                case 'o':if (Player.k9>=1){Player.k9--;print("��ˮ�񹦣����ż��ҵĻ𻨣�");sd=rand();HP-=sd;}else print("��û�У�");break;
            }
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]   /  / ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}/      |X X| *");printf("\n");
            printf("*  | V | [6]      *| O | *");printf("\n");
            printf("*   OVO  ZXZ  *     CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I  /  3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU    * *      S S  *");printf("\n");
            printf("*   U U /           S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D  /      /  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]     / | O | *");printf("\n");
            printf("*   OVO  ZXZ   /    CVD  *");printf("\n");
            printf("*  /N N===I  *3//  =OOO  *");printf("\n");
            printf("* //N N   I /// 3oo=SSS  *");printf("\n");
            printf("*// ONO   O //      RRR  *");printf("\n");
            printf("*P  UMU     ///     S S  *");printf("\n");
            printf("*   U U   / *       S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I   //o  =OOO  *");printf("\n");
            printf("* //N N   I  // 3oo=SSS  *");printf("\n");
            printf("*// ONO   O ///     RRR  *");printf("\n");
            printf("*P  UMU    ///      S S  *");printf("\n");
            printf("*   U U   ////      S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D   ///      SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ/*");printf("\n");
            printf("*   _/_  [6]        _////*�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |/////*");printf("\n");
            printf("*  | V | [6]       ///// *");printf("\n");
            printf("*   OVO  ZXZ       ////  *");printf("\n");
            printf("*  /N N===I   3oo ////O  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����100��ң�300����ֵ��");
                Player.EXP+=300;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=100;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I   3oo  =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I 3oo    =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N3ooI        =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        ��ʬ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V ***6]       | O | *");printf("\n");
            printf("*   OV*+o+*Z        CVD  *");printf("\n");
            printf("*  /N *ooo*     3oo=OOO  *");printf("\n");
            printf("* //N *+o+*     3oo=SSS  *");printf("\n");
            printf("*// ONO***O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(500);system("cls");
            if (Player.HP<=0){
                print("�㱻ҧ���ˣ�");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_sheshou(){
    system("cls");
    string name="��ʬ";
    int HP=750,MAXHP=750,ATK=100,DEF=2;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}     ��������*");printf("\n");
        printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}      +|X X| *");printf("\n");
        printf("*  | V | [6]     +|| O | *");printf("\n");
        printf("*   OVO  ZXZ    + | ===  *");printf("\n");
        printf("*  /N N===I   <+--|--|   *");printf("\n");
        printf("* //N N   I    |-----|   *");printf("\n");
        printf("*// ONO   O     + |  |   *");printf("\n");
        printf("*P  UMU          +| ===  *");printf("\n");
        printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D             | |  *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.����   2.����   3.����  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("��ʮ���ƣ���Ϊ�ϼƣ�");
            system("cls");
            return false;
        }else if (qwe=='1'){
            int sd;
            system("cls");
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   <+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >          ��������*");printf("\n");
            printf("*   _/_             ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O|          +|X X| *");printf("\n");
            printf("*  | V |         +|| O | *");printf("\n");
            printf("*   OVO   |     + | ===  *");printf("\n");
            printf("*  /N N===+============= *");printf("\n");
            printf("* //N N   |    |-----|   *");printf("\n");
            printf("*// ONO         + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >          ��������*");printf("\n");
            printf("*   _/_             ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O|          +|X X| *");printf("\n");
            printf("*  | V |  |      +|| O | *");printf("\n");
            printf("*   OVO  =+============= *");printf("\n");
            printf("*  /N N=/ |   <*  |  |   *");printf("\n");
            printf("* //N N        |-----|   *");printf("\n");
            printf("*// ONO         + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >          ��������*");printf("\n");
            printf("*   _/_             ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O|          +|X X| *");printf("\n");
            printf("*  | V |         +|| O | *");printf("\n");
            printf("*   OVO   |     + | ===  *");printf("\n");
            printf("*  /N N===+============= *");printf("\n");
            printf("* //N N   |    |-----|   *");printf("\n");
            printf("*// ONO         + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >          ��������*");printf("\n");
            printf("*   _/_             ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O|          +|X X| *");printf("\n");
            printf("*  | V |         +|| O | *");printf("\n");
            printf("*   OVO         + | ===  *");printf("\n");
            printf("*  /N N=| |    |-----|   *");printf("\n");
            printf("* //N N ==+============= *");printf("\n");
            printf("*// ONO   |     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����50��ң�400����ֵ��");
                Player.EXP+=400;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=50;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   <+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I <==+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N==<=====+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N<=====<<  +--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  AAAAAAAAA     +|| O | *");printf("\n");
            printf("*  AAAAAAAAA    + | ===  *");printf("\n");
            printf("*  AAAAAAAAA  <+--|--|   *");printf("\n");
            printf("* /AAAAAAAAA   |-----|   *");printf("\n");
            printf("*//AAAAAAAAA    + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻����������ˣ�������ˣ�");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.����%d�Ż�Ѫ����\n",Player.k1);
            printf("w.����%d�������Ԫ����\n",Player.k2);
            printf("e.����%d�����һ�������\n",Player.k3);
            printf("r.����%d�ſ����лڷ���\n",Player.k4);
            printf("t.����%d�ž������\n",Player.k5);
            printf("y.����%d�Ŷ�����\n",Player.k6);
            printf("u.����%d�����Ǵ󷨷���\n",Player.k7);
            printf("i.����%d�Ŷ��¾Ž�����\n",Player.k8);
            printf("o.����%d����ˮ�񹦷���\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("�е�һ���泩��HP+500");Player.HP+=500;}else print("��û�У�");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("�о�һ�����һ��Ŀ������ȫ����HP+1000");Player.HP+=1000;}else print("��û�У�");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("���˫����ʹ�ò�ͬ����ʽ���˺�������");Player.ATK*=2;};break;
                case 'r':if (Player.k4>=1){Player.k4--;print("�Ʒ�һ���Ӻ��˳�ȥ��������ѣ�");sd=rand()%50000+1;HP-=sd;}else print("��û�У�");break;
                case 't':if (Player.k5>=1){Player.k5--;print("һ�ɾ޴���������˳�����");sd=rand()%80000+20000;HP-=sd;}else print("��û�У�");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("��꣡����");if ((rand()%21)%10==0)HP=0;}else print("��û�У�");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("�����񹦣�������");HP-=500;Player.HP+=500;}else print("��û�У�");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("���¾Ž���������أ�");Player.ATK*=9;}else print("��û�У�");break;
                case 'o':if (Player.k9>=1){Player.k9--;print("��ˮ�񹦣����ż��ҵĻ𻨣�");sd=rand();HP-=sd;}else print("��û�У�");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   <+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]  ---------- *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   <+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU        --------  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   ---------- *");printf("\n");
            printf("* //N N   I    |------   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D        --------  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        __/  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X/X| *");printf("\n");
            printf("*  | V | [6]     +||/O |/*");printf("\n");
            printf("*   OVO  ZXZ    + |/===/ *");printf("\n");
            printf("*  /N N===I   <+--/--|/  *");printf("\n");
            printf("* //N N   I    |-/---/   *");printf("\n");
            printf("*// ONO   O     / / /| / *");printf("\n");
            printf("*P  UMU          /| ==/  *");printf("\n");
            printf("*   U U         / + |/|  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D        /    / |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}  ++++++++++ *");printf("\n");
            printf("*  | V | [6]    ++|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   <+++|--+   *");printf("\n");
            printf("* //N N   I    |-+-++|   *");printf("\n");
            printf("*// ONO   O     * ++++   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U         * + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����100��ң�300����ֵ��");
                Player.EXP+=300;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=100;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   <+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I <==+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N==<=====+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N<=====<<  +--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     ��������*");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  AAAAAAAAA     +|| O | *");printf("\n");
            printf("*  AAAAAAAAA    + | ===  *");printf("\n");
            printf("*  AAAAAAAAA  <+--|--|   *");printf("\n");
            printf("* /AAAAAAAAA   |-----|   *");printf("\n");
            printf("*//AAAAAAAAA    + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻����������ˣ�������ˣ�");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_kulipa(){
    system("cls");
    string name="��ʬ";
    int HP=1300,MAXHP=1300,ATK=80,DEF=20;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}      ������ *");printf("\n");
        printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}       |U U| *");printf("\n");
        printf("*  | V | [6]       | A | *");printf("\n");
        printf("*   OVO  ZXZ        CVD  *");printf("\n");
        printf("*  /N N===I         OOO  *");printf("\n");
        printf("* //N N   I         SSS o*");printf("\n");
        printf("*// ONO   O         RRR M*");printf("\n");
        printf("*P  UMU             SSS  *");printf("\n");
        printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D           SSSASSS*");printf("\n");
        printf("**************************");printf("\n");
        printf("1.����   2.����    3.���� ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("��ʮ���ƣ���Ϊ�ϼƣ�");
            system("cls");
            return false;
        }else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  | V | ZZZ       | A | *");printf("\n");
            printf("*   OVO  ZZZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  ZZZ      ������ *");printf("\n");
            printf("*   _/_  ZZZ        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| ZZZ       |U U| *");printf("\n");
            printf("*  | V | ZZZ       | A | *");printf("\n");
            printf("*   OVO  ZZZ        CVD  *");printf("\n");
            printf("*  /N N===Z         OOO  *");printf("\n");
            printf("* //N N   Z         SSS o*");printf("\n");
            printf("*// ONO   Z         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*ZZZZZZ           ������ *");printf("\n");
            printf("* ZZZZZZZ           ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O OZZZ         |U U| *");printf("\n");
            printf("*  | V ZZZZ        | A | *");printf("\n");
            printf("*   OVO ZZZ         CVD  *");printf("\n");
            printf("*  /N N===Z         OOO  *");printf("\n");
            printf("* //N N   Z         SSS o*");printf("\n");
            printf("*// ONO             RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >       ZZZZ������ *");printf("\n");
            printf("*   _/_         ZZZZ__  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O|        ZZZZU U| *");printf("\n");
            printf("*  | V |       ZZZZ| A | *");printf("\n");
            printf("*   OVO        ZZZZZCVD  *");printf("\n");
            printf("*  /N N===    ZZZZ  OOO  *");printf("\n");
            printf("* //N N       ZZZZ  SSS o*");printf("\n");
            printf("*// ONO     ZZZZ    RRR M*");printf("\n");
            printf("*P  UMU    ZZZZZ    SSS  *");printf("\n");
            printf("*   U U   ZZZZ    SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D  ZZZZZZ   SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����150��ң�200����ֵ��");
                Player.EXP+=200;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=150;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*   _/_  [6]        TTT  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       TTTTT *");printf("\n");
            printf("*  | V | [6]       TTTTT *");printf("\n");
            printf("*   OVO  ZXZ        TTT  *");printf("\n");
            printf("*  /N N===I         TTT  *");printf("\n");
            printf("* //N N   I         TTT T*");printf("\n");
            printf("*// ONO   O        TTTTTT*");printf("\n");
            printf("*P  UMU            TTTTT *");printf("\n");
            printf("*   U U           TTTTTTT*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}TTTTTTTTTTTT *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /NTTTTTTTTTTTTTTTTTTT *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONOTTTTTTTTTTTTTTTT M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*TTTTTTTTT6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  TTTTTTTT6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* /TT TTTTTTTT      SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  TTTTTT          SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("* TTTTTTTT        SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |TTT| *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   ITTTTTTTT SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻ը���ˣ�������ˣ�");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.����%d�Ż�Ѫ����\n",Player.k1);
            printf("w.����%d�������Ԫ����\n",Player.k2);
            printf("e.����%d�����һ�������\n",Player.k3);
            printf("r.����%d�ſ����лڷ���\n",Player.k4);
            printf("t.����%d�ž������\n",Player.k5);
            printf("y.����%d�Ŷ�����\n",Player.k6);
            printf("u.����%d�����Ǵ󷨷���\n",Player.k7);
            printf("i.����%d�Ŷ��¾Ž�����\n",Player.k8);
            printf("o.����%d����ˮ�񹦷���\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("�е�һ���泩��HP+500");Player.HP+=500;}else print("��û�У�");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("�о�һ�����һ��Ŀ������ȫ����HP+1000");Player.HP+=1000;}else print("��û�У�");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("���˫����ʹ�ò�ͬ����ʽ���˺�������");Player.ATK*=2;}else print("��û�У�");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("�Ʒ�һ���Ӻ��˳�ȥ��������ѣ�");sd=rand()%50000+1;HP-=sd;}else print("��û�У�");break;
                case 't':if (Player.k5>=1){Player.k5--;print("һ�ɾ޴���������˳�����");sd=rand()%80000+20000;HP-=sd;}else print("��û�У�");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("��꣡����");if ((rand()%21)%10==0)HP=0;}else print("��û�У�");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("�����񹦣�������");HP-=500;Player.HP+=500;}else print("��û�У�");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("���¾Ž���������أ�");Player.ATK*=9;}else print("��û�У�");break;
                case 'o':if (Player.k9>=1){Player.k9--;print("��ˮ�񹦣����ż��ҵĻ𻨣�");sd=rand();HP-=sd;}else print("��û�У�");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  | V | ZZZ       | A | *");printf("\n");
            printf("*   OVO  ZZZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  ZZZ      ������ *");printf("\n");
            printf("*   _/_  ZZZ        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| ZZZ       |U U| *");printf("\n");
            printf("*  | V | ZZZ       | A | *");printf("\n");
            printf("*   OVO  ZZZ        CVD  *");printf("\n");
            printf("*  /N N===Z         OOO  *");printf("\n");
            printf("* //N N   Z         SSS o*");printf("\n");
            printf("*// ONO   Z         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*ZZZZZZ           ������ *");printf("\n");
            printf("* ZZZZZZZ           ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O OZZZ         |U U| *");printf("\n");
            printf("*  | V ZZZZ        | A | *");printf("\n");
            printf("*   OVO ZZZ         CVD  *");printf("\n");
            printf("*  /N N===Z         OOO  *");printf("\n");
            printf("* //N N   Z         SSS o*");printf("\n");
            printf("*// ONO             RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >       ZZZZ������ *");printf("\n");
            printf("*   _/_         ZZZZ__  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O|        ZZZZU U| *");printf("\n");
            printf("*  | V |       ZZZZ| A | *");printf("\n");
            printf("*   OVO        ZZZZZCVD  *");printf("\n");
            printf("*  /N N===    ZZZZ  OOO  *");printf("\n");
            printf("* //N N       ZZZZ  SSS o*");printf("\n");
            printf("*// ONO     ZZZZ    RRR M*");printf("\n");
            printf("*P  UMU    ZZZZZ    SSS  *");printf("\n");
            printf("*   U U   ZZZZ    SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D  ZZZZZZ   SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����100��ң�300����ֵ��");
                Player.EXP+=300;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=100;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*   _/_  [6]        TTT  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       TTTTT *");printf("\n");
            printf("*  | V | [6]       TTTTT *");printf("\n");
            printf("*   OVO  ZXZ        TTT  *");printf("\n");
            printf("*  /N N===I         TTT  *");printf("\n");
            printf("* //N N   I         TTT T*");printf("\n");
            printf("*// ONO   O        TTTTTT*");printf("\n");
            printf("*P  UMU            TTTTT *");printf("\n");
            printf("*   U U           TTTTTTT*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}TTTTTTTTTTTT *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /NTTTTTTTTTTTTTTTTTTT *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONOTTTTTTTTTTTTTTTT M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*TTTTTTTTT6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  TTTTTTTT6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* /TT TTTTTTTT      SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  TTTTTT          SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("* TTTTTTTT        SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |TTT| *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   ITTTTTTTT SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      ������ *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻ը���ˣ�������ˣ�");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_jiangshiwang(){
    system("cls");
    string name="��ʬ";
    int HP=4000,MAXHP=4000,ATK=100,DEF=30;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}   6   ��ʬ��*");printf("\n");
        printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6} 66666 |X X| *");printf("\n");
        printf("*  | V | [6]   6   | O | *");printf("\n");
        printf("*   OVO  ZXZ   6    666  *");printf("\n");
        printf("*  /N N===I    6666666666*");printf("\n");
        printf("* //N N   I         666 6*");printf("\n");
        printf("*// ONO   O         666 6*");printf("\n");
        printf("*P  UMU             6 6 6*");printf("\n");
        printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            66 66 *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.����   2.����    3.���� ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("��ʮ���ƣ���Ϊ�ϼƣ�");
            system("cls");
            return false;
        }else if (qwe=='1'){
            int sd;
            system("cls");
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |+ +| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   |/|  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |+ +| {6} 66666 |X X| *");printf("\n");
            printf("*  ||V|| [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   |/|  [6]   6    asdf *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |+ +| {6} 66666 |X X| *");printf("\n");
            printf("*  ||V|| [6]   6   | sdv *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6asfbbfvVV*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O      sdfaa6 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����1000��ң�1000����ֵ��");
                Player.EXP+=1000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=1000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*666666666666666666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*66666666666666666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*66666666666666666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*666666666666666666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻�����ˣ�");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.����%d�Ż�Ѫ����\n",Player.k1);
            printf("w.����%d�������Ԫ����\n",Player.k2);
            printf("e.����%d�����һ�������\n",Player.k3);
            printf("r.����%d�ſ����лڷ���\n",Player.k4);
            printf("t.����%d�ž������\n",Player.k5);
            printf("y.����%d�Ŷ�����\n",Player.k6);
            printf("u.����%d�����Ǵ󷨷���\n",Player.k7);
            printf("i.����%d�Ŷ��¾Ž�����\n",Player.k8);
            printf("o.����%d����ˮ�񹦷���\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("�е�һ���泩��HP+500");Player.HP+=500;}else print("��û�У�");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("�о�һ�����һ��Ŀ������ȫ����HP+1000");Player.HP+=1000;}else print("��û�У�");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("���˫����ʹ�ò�ͬ����ʽ���˺�������");Player.ATK*=2;}else print("��û�У�");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("�Ʒ�һ���Ӻ��˳�ȥ��������ѣ�");sd=rand()%50000+1;HP-=sd;}else print("��û�У�");break;
                case 't':if (Player.k5>=1){Player.k5--;print("һ�ɾ޴���������˳�����");sd=rand()%80000+20000;HP-=sd;}else print("��û�У�");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("��꣡����");if ((rand()%21)%10==0)HP=0;}else print("��û�У�");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("�����񹦣�������");HP-=500;Player.HP+=500;}else print("��û�У�");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("���¾Ž���������أ�");Player.ATK*=9;}else print("��û�У�");break;
                case 'o':if (Player.k9>=1){Player.k9--;print("��ˮ�񹦣����ż��ҵĻ𻨣�");sd=rand();HP-=sd;}else print("��û�У�");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |+ +| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   |/|  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |+ +| {6} 66666 |X X| *");printf("\n");
            printf("*  ||V|| [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   |/|  [6]   6    asdf *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |+ +| {6} 66666 |X X| *");printf("\n");
            printf("*  ||V|| [6]   6   | sdv *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6asfbbfvVV*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O      sdfaa6 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����100��ң�300����ֵ��");
                Player.EXP+=300;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=100;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*666666666666666666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*66666666666666666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*66666666666666666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*666666666666666666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   ��ʬ��*");printf("\n");
            printf("*   _/_  [6]   6    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����    3.���� ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻�����ˣ�");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_kkk(){
    system("cls");
    string name="��ʬ";
    long long HP=999999999,MAXHP=999999999,ATK=Player.DEF+750,DEF=0;
    print("KKK���ߣ�����֨֨�ҽУ��ϴ��Ҵ����ˣ�����ȥ���ɣ�����");
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}  ����kkksc06*");printf("\n");
        printf("*   _/_  [6]    ==+ DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}       DFDFD *");printf("\n");
        printf("*  | V | [6]   ==+ |FFF| *");printf("\n");
        printf("*   OVO  ZXZ ==+    CFD  *");printf("\n");
        printf("*  /N N===I     Esd=endlo*");printf("\n");
        printf("* //N N   I       ==+SS o*");printf("\n");
        printf("*// ONO   O  ==+    RRR M*");printf("\n");
        printf("*P  UMU ==+        sS Ss *");printf("\n");
        printf("*   U U   ==+   ==+sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            sS Ss *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.����   2.����   3.����  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("��ս�ڼ����㻹���ܣ�");
            system("cls");
        }else if (qwe=='1'){
            int sd;
            system("cls");
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/_  [6]    ==+ DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]   ==+ |FFF| *");printf("\n");
            printf("*   OVO  ZXZ ==+    CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO   O  ==+    RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U         ==+sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/_  [6]    ==+ DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]   ==+ |FFF| *");printf("\n");
            printf("*   OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U         ==+sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/_  [6]        DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]       |FFF| *");printf("\n");
            printf("*   OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U            sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/_  [6]        DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}        FDFD *");printf("\n");
            printf("*  | V | [6]         FF| *");printf("\n");
            printf("*   OVO  ZXZ          D  *");printf("\n");
            printf("*  /N N===I          ndlo*");printf("\n");
            printf("* //N N   I           S o*");printf("\n");
            printf("*// ONO   O           R M*");printf("\n");
            printf("*P  UMU               Ss *");printf("\n");
            printf("*   U U               Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D               Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/_  [6]        DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]       |FFF| *");printf("\n");
            printf("*   OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U            sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("kkk:û�뵽!!����~~~~��һ����Ѫ��");
                print("��Ϸͨ�أ����������������kkk��ħצ��");
                Player.EXP+=999999;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=999999;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/_  [6]==+     DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]  ==+  |FFF| *");printf("\n");
            printf("*==+OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO   O ==+     RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U   ==+      sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/==+[6]        DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]==+    |FFF| *");printf("\n");
            printf("*==+OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO==+O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*==+U U            sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     sss{=}  ����kkksc06*");printf("\n");
            printf("*   _/sss[6]        DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O sss{6}sss    DFDFD *");printf("\n");
            printf("*sss V | [6]sss    |FFF| *");printf("\n");
            printf("*sssOVO  ZXZsss     CFD  *");printf("\n");
            printf("*sssN N===I     Esd=endlo*");printf("\n");
            printf("* //N NsssI       ==+SS o*");printf("\n");
            printf("*// ONOsssO         RRR M*");printf("\n");
            printf("*P  UMUsss         sS Ss *");printf("\n");
            printf("*==+U U            sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/==+[6]        DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]==+    |FFF| *");printf("\n");
            printf("*==+OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //ssssssI       ==+SS o*");printf("\n");
            printf("*// ssssssO         RRR M*");printf("\n");
            printf("*P  ssssss         sS Ss *");printf("\n");
            printf("*==+ssssss         sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   ssssss         sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*sssssssssssss����kkksc06*");printf("\n");
            printf("*sssssssssssss      DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*sssssssssssss     DFDFD *");printf("\n");
            printf("*sssssssssssss+    |FFF| *");printf("\n");
            printf("*sssssssssssss      CFD  *");printf("\n");
            printf("*sssssssssssss  Esd=endlo*");printf("\n");
            printf("*sssssssssssss    ==+SS o*");printf("\n");
            printf("*sssssssssssss      RRR M*");printf("\n");
            printf("*sssssssssssss     sS Ss *");printf("\n");
            printf("*sssssssssssss     sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*sssssssssssss     sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻�����ˣ�������ˣ�");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.����%d�Ż�Ѫ����\n",Player.k1);
            printf("w.����%d�������Ԫ����\n",Player.k2);
            printf("e.����%d�����һ�������\n",Player.k3);
            printf("r.����%d�ſ����лڷ���\n",Player.k4);
            printf("t.����%d�ž������\n",Player.k5);
            printf("y.����%d�Ŷ�����\n",Player.k6);
            printf("u.����%d�����Ǵ󷨷���\n",Player.k7);
            printf("i.����%d�Ŷ��¾Ž�����\n",Player.k8);
            printf("o.����%d����ˮ�񹦷���\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("�е�һ���泩��HP+500");Player.HP+=500;}else print("��û�У�");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("�о�һ�����һ��Ŀ������ȫ����HP+1000");Player.HP+=1000;}else print("��û�У�");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("���˫����ʹ�ò�ͬ����ʽ���˺�������");Player.ATK*=2;}else print("��û�У�");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("�Ʒ�һ���Ӻ��˳�ȥ��������ѣ�");sd=rand()%50000+1;HP-=sd;}else print("��û�У�");break;
                case 't':if (Player.k5>=1){Player.k5--;print("һ�ɾ޴���������˳�����");sd=rand()%80000+20000;HP-=sd;}else print("��û�У�");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("��꣡����");if ((rand()%21)%10==0)HP=0;}else print("��û�У�");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("�����񹦣�������");HP-=500;Player.HP+=500;}else print("��û�У�");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("���¾Ž���������أ�");Player.ATK*=9;}else print("��û�У�");break;
                case 'o':if (Player.k9>=1){Player.k9--;print("��ˮ�񹦣����ż��ҵĻ𻨣�");sd=rand();HP-=sd;}else print("��û�У�");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/_  [6]    ==+ DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]   ==+ |FFF| *");printf("\n");
            printf("*   OVO  ZXZ ==+    CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO   O  ==+    RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U         ==+sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/_  [6]    ==+ DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]   ==+ |FFF| *");printf("\n");
            printf("*   OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U         ==+sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/_  [6]        DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]       |FFF| *");printf("\n");
            printf("*   OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U            sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/_  [6]        DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}        FDFD *");printf("\n");
            printf("*  | V | [6]         FF| *");printf("\n");
            printf("*   OVO  ZXZ          D  *");printf("\n");
            printf("*  /N N===I          ndlo*");printf("\n");
            printf("* //N N   I           S o*");printf("\n");
            printf("*// ONO   O           R M*");printf("\n");
            printf("*P  UMU               Ss *");printf("\n");
            printf("*   U U               Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D               Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/_  [6]        DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]       |FFF| *");printf("\n");
            printf("*   OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U            sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����9999999��ң�99999����ֵ����ȳ��������");
                Player.EXP+=99999999;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=99999;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/_  [6]==+     DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]  ==+  |FFF| *");printf("\n");
            printf("*==+OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO   O ==+     RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U   ==+      sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/==+[6]        DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]==+    |FFF| *");printf("\n");
            printf("*==+OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO==+O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*==+U U            sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     sss{=}  ����kkksc06*");printf("\n");
            printf("*   _/sss[6]        DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O sss{6}sss    DFDFD *");printf("\n");
            printf("*sss V | [6]sss    |FFF| *");printf("\n");
            printf("*sssOVO  ZXZsss     CFD  *");printf("\n");
            printf("*sssN N===I     Esd=endlo*");printf("\n");
            printf("* //N NsssI       ==+SS o*");printf("\n");
            printf("*// ONOsssO         RRR M*");printf("\n");
            printf("*P  UMUsss         sS Ss *");printf("\n");
            printf("*==+U U            sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  ����kkksc06*");printf("\n");
            printf("*   _/==+[6]        DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]==+    |FFF| *");printf("\n");
            printf("*==+OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //ssssssI       ==+SS o*");printf("\n");
            printf("*// ssssssO         RRR M*");printf("\n");
            printf("*P  ssssss         sS Ss *");printf("\n");
            printf("*==+ssssss         sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   ssssss         sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*sssssssssssss����kkksc06*");printf("\n");
            printf("*sssssssssssss      DDD  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*sssssssssssss     DFDFD *");printf("\n");
            printf("*sssssssssssss+    |FFF| *");printf("\n");
            printf("*sssssssssssss      CFD  *");printf("\n");
            printf("*sssssssssssss  Esd=endlo*");printf("\n");
            printf("*sssssssssssss    ==+SS o*");printf("\n");
            printf("*sssssssssssss      RRR M*");printf("\n");
            printf("*sssssssssssss     sS Ss *");printf("\n");
            printf("*sssssssssssss     sS Ss=+�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*sssssssssssss     sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻���������ˣ�������ˣ�");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_kkkshiwei(){
    system("cls");
    string name="��ʬ";
    int HP=100000,MAXHP=100000,ATK=260,DEF=20;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}    A kkk����*");printf("\n");
        printf("*   _/_  [6]    V   ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}    A  |O#O| *");printf("\n");
        printf("*  | V | [6]    V  |###| *");printf("\n");
        printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
        printf("*  /N N===I     Too=NNN  *");printf("\n");
        printf("* //N N   I     Ioo=SSS  *");printf("\n");
        printf("*// ONO   O         RRR  *");printf("\n");
        printf("*P  UMU             S S  *");printf("\n");
        printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            SS SS *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.����   2.����   3.����  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("��ʮ���ƣ���Ϊ�ϼƣ�");
            system("cls");
            return false;
        }else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk����*");printf("\n");
            printf("*   _/_  [6]    V   ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |O#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ   AA   NNN  *");printf("\n");
            printf("*  /N N===I    AToo=NNN  *");printf("\n");
            printf("* //N N   I    AIoo=SSS  *");printf("\n");
            printf("*// ONO   O    A    RRR  *");printf("\n");
            printf("*P  UMU        A    S S  *");printf("\n");
            printf("*   U U        A    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D        A   SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk����*");printf("\n");
            printf("*   _/_  [6]    V   AAA  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  AO#O| *");printf("\n");
            printf("*  | V | [6]    V A|###| *");printf("\n");
            printf("*   OVO  ZXZ    AA  NNN  *");printf("\n");
            printf("*  /N N===I     TAo=NNN  *");printf("\n");
            printf("* //N N   I     IAo=SSS  *");printf("\n");
            printf("*// ONO   O      A  RRR  *");printf("\n");
            printf("*P  UMU          A  S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D         A  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk����*");printf("\n");
            printf("*   _/_  [6]    V   __AA *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |OAA| *");printf("\n");
            printf("*  | V | [6]    V  |AA#| *");printf("\n");
            printf("*   OVO  ZXZ    A  AANN  *");printf("\n");
            printf("*  /N N===I     TooANNN  *");printf("\n");
            printf("* //N N   I    AAAAAAAAA *");printf("\n");
            printf("*// ONO   O    AAA  RRAA *");printf("\n");
            printf("*P  UMU        A A  S AA *");printf("\n");
            printf("*   U U       AA A  S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D       A  A SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk����*");printf("\n");
            printf("*   _/_  [6]    V   ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  AA#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
            printf("*  /N N===I     Too=AAAA *");printf("\n");
            printf("* //N N   I     Ioo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU            AAAA  *");printf("\n");
            printf("*   U U             SAAA *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk����*");printf("\n");
            printf("*   _/_  [6]    V   ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |O#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
            printf("*  /N N===I     Too=NNN  *");printf("\n");
            printf("* //N N   I     Ioo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����2000��ң�1000����ֵ��");
                Player.EXP+=1000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=2000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk����*");printf("\n");
            printf("*   _/_  [6]    V   ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |O#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
            printf("*  /N N===I     Too=NNN  *");printf("\n");
            printf("* //N N   I     Ioo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   A kkk���� *");printf("\n");
            printf("*   _/_  [6]   V   ___   *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   A  |O#O|  *");printf("\n");
            printf("*  | V | [6]   V  |###|  *");printf("\n");
            printf("*   OVO  ZXZ   A   NNN   *");printf("\n");
            printf("*  /N N===I    Too=NNN   *");printf("\n");
            printf("* //N N   I    Ioo=SSS   *");printf("\n");
            printf("*// ONO   O        RRR   *");printf("\n");
            printf("*P  UMU            S S   *");printf("\n");
            printf("*   U U            S S   *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     > AAAAAAAA kkk���� *");printf("\n");
            printf("*   _/AAAAVVVVVV   ___   *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |OAAAVVVVVVVA  |O#O|  *");printf("\n");
            printf("*  |AAAVVVVV   V  |###|  *");printf("\n");
            printf("*   AAAVVVXZ   A   NNN   *");printf("\n");
            printf("*  /NAAVVVI    Too=NNN   *");printf("\n");
            printf("* //N AAVVVV   Ioo=SSS   *");printf("\n");
            printf("*// ONOAAAVVV      RRR   *");printf("\n");
            printf("*P  UMU AAVVVV     S S   *");printf("\n");
            printf("*   U U  AAA       S S   *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     > AAAAAAA  kkk���� *");printf("\n");
            printf("*   _/AAAAVVVVV    ___   *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |OAAAVVVVVVV   |O#O|  *");printf("\n");
            printf("*  |AAAVVVVV      |###|  *");printf("\n");
            printf("*   AAAVVVXZ       NNN   *");printf("\n");
            printf("*  /NAAVVVI    Too=NNN   *");printf("\n");
            printf("* //N AAVVVV   Ioo=SSS   *");printf("\n");
            printf("*// ONOAAAVVV  A   RRR   *");printf("\n");
            printf("*P  UMU AAVVVV V   S S   *");printf("\n");
            printf("*   U U  AAA   A   S S   *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D        V  SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   A kkk���� *");printf("\n");
            printf("*   _/_  [6]   V   ___   *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   A  |O#O|  *");printf("\n");
            printf("*  | V | [6]   V  |###|  *");printf("\n");
            printf("*   OVO  ZXZ   A   NNN   *");printf("\n");
            printf("*  /N N===I    Too=NNN   *");printf("\n");
            printf("* //N N   I    Ioo=SSS   *");printf("\n");
            printf("*// ONO   O        RRR   *");printf("\n");
            printf("*P  UMU            S S   *");printf("\n");
            printf("*   U U            S S   *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻�����ˣ�");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.����%d�Ż�Ѫ����\n",Player.k1);
            printf("w.����%d�������Ԫ����\n",Player.k2);
            printf("e.����%d�����һ�������\n",Player.k3);
            printf("r.����%d�ſ����лڷ���\n",Player.k4);
            printf("t.����%d�ž������\n",Player.k5);
            printf("y.����%d�Ŷ�����\n",Player.k6);
            printf("u.����%d�����Ǵ󷨷���\n",Player.k7);
            printf("i.����%d�Ŷ��¾Ž�����\n",Player.k8);
            printf("o.����%d����ˮ�񹦷���\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("�е�һ���泩��HP+500");Player.HP+=500;}else print("��û�У�");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("�о�һ�����һ��Ŀ������ȫ����HP+1000");Player.HP+=1000;}else print("��û�У�");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("���˫����ʹ�ò�ͬ����ʽ���˺�������");Player.ATK*=2;}else print("��û�У�");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("�Ʒ�һ���Ӻ��˳�ȥ��������ѣ�");sd=rand()%50000+1;HP-=sd;}else print("��û�У�");break;
                case 't':if (Player.k5>=1){Player.k5--;print("һ�ɾ޴���������˳�����");sd=rand()%80000+20000;HP-=sd;}else print("��û�У�");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("��꣡����");if ((rand()%21)%10==0)HP=0;}else print("��û�У�");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("�����񹦣�������");HP-=500;Player.HP+=500;}else print("��û�У�");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("���¾Ž���������أ�");Player.ATK*=9;};break;
                case 'o':if (Player.k9>=1){Player.k9--;print("��ˮ�񹦣����ż��ҵĻ𻨣�");sd=rand();HP-=sd;}else print("��û�У�");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk����*");printf("\n");
            printf("*   _/_  [6]    V   ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |O#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ   AA   NNN  *");printf("\n");
            printf("*  /N N===I    AToo=NNN  *");printf("\n");
            printf("* //N N   I    AIoo=SSS  *");printf("\n");
            printf("*// ONO   O    A    RRR  *");printf("\n");
            printf("*P  UMU        A    S S  *");printf("\n");
            printf("*   U U        A    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D        A   SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk����*");printf("\n");
            printf("*   _/_  [6]    V   AAA  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  AO#O| *");printf("\n");
            printf("*  | V | [6]    V A|###| *");printf("\n");
            printf("*   OVO  ZXZ    AA  NNN  *");printf("\n");
            printf("*  /N N===I     TAo=NNN  *");printf("\n");
            printf("* //N N   I     IAo=SSS  *");printf("\n");
            printf("*// ONO   O      A  RRR  *");printf("\n");
            printf("*P  UMU          A  S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D         A  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk����*");printf("\n");
            printf("*   _/_  [6]    V   __AA *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |OAA| *");printf("\n");
            printf("*  | V | [6]    V  |AA#| *");printf("\n");
            printf("*   OVO  ZXZ    A  AANN  *");printf("\n");
            printf("*  /N N===I     TooANNN  *");printf("\n");
            printf("* //N N   I    AAAAAAAAA *");printf("\n");
            printf("*// ONO   O    AAA  RRAA *");printf("\n");
            printf("*P  UMU        A A  S AA *");printf("\n");
            printf("*   U U       AA A  S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D       A  A SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk����*");printf("\n");
            printf("*   _/_  [6]    V   ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  AA#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
            printf("*  /N N===I     Too=AAAA *");printf("\n");
            printf("* //N N   I     Ioo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU            AAAA  *");printf("\n");
            printf("*   U U             SAAA *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk����*");printf("\n");
            printf("*   _/_  [6]    V   ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |O#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
            printf("*  /N N===I     Too=NNN  *");printf("\n");
            printf("* //N N   I     Ioo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����2000��ң�1000����ֵ��");
                Player.EXP+=1000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=2000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100)+100;
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk����*");printf("\n");
            printf("*   _/_  [6]    V   ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |O#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
            printf("*  /N N===I     Too=NNN  *");printf("\n");
            printf("* //N N   I     Ioo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   A kkk���� *");printf("\n");
            printf("*   _/_  [6]   V   ___   *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   A  |O#O|  *");printf("\n");
            printf("*  | V | [6]   V  |###|  *");printf("\n");
            printf("*   OVO  ZXZ   A   NNN   *");printf("\n");
            printf("*  /N N===I    Too=NNN   *");printf("\n");
            printf("* //N N   I    Ioo=SSS   *");printf("\n");
            printf("*// ONO   O        RRR   *");printf("\n");
            printf("*P  UMU            S S   *");printf("\n");
            printf("*   U U            S S   *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     > AAAAAAAA kkk���� *");printf("\n");
            printf("*   _/AAAAVVVVVV   ___   *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |OAAAVVVVVVVA  |O#O|  *");printf("\n");
            printf("*  |AAAVVVVV   V  |###|  *");printf("\n");
            printf("*   AAAVVVXZ   A   NNN   *");printf("\n");
            printf("*  /NAAVVVI    Too=NNN   *");printf("\n");
            printf("* //N AAVVVV   Ioo=SSS   *");printf("\n");
            printf("*// ONOAAAVVV      RRR   *");printf("\n");
            printf("*P  UMU AAVVVV     S S   *");printf("\n");
            printf("*   U U  AAA       S S   *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     > AAAAAAA  kkk���� *");printf("\n");
            printf("*   _/AAAAVVVVV    ___   *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |OAAAVVVVVVV   |O#O|  *");printf("\n");
            printf("*  |AAAVVVVV      |###|  *");printf("\n");
            printf("*   AAAVVVXZ       NNN   *");printf("\n");
            printf("*  /NAAVVVI    Too=NNN   *");printf("\n");
            printf("* //N AAVVVV   Ioo=SSS   *");printf("\n");
            printf("*// ONOAAAVVV  A   RRR   *");printf("\n");
            printf("*P  UMU AAVVVV V   S S   *");printf("\n");
            printf("*   U U  AAA   A   S S   *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D        V  SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   A kkk���� *");printf("\n");
            printf("*   _/_  [6]   V   ___   *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   A  |O#O|  *");printf("\n");
            printf("*  | V | [6]   V  |###|  *");printf("\n");
            printf("*   OVO  ZXZ   A   NNN   *");printf("\n");
            printf("*  /N N===I    Too=NNN   *");printf("\n");
            printf("* //N N   I    Ioo=SSS   *");printf("\n");
            printf("*// ONO   O        RRR   *");printf("\n");
            printf("*P  UMU            S S   *");printf("\n");
            printf("*   U U            S S   *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻�����ˣ�");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_kkkmofashi(){
    system("cls");
    string name="��ʬ";
    int HP=120000,MAXHP=120000,ATK=400,DEF=0;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}    kkkħ��ʦ*");printf("\n");
        printf("*   _/_  [6]        _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}   O   |C C| *");printf("\n");
        printf("*  | V | [6]   T   |MMM| *");printf("\n");
        printf("*   OVO  ZXZ   T    MMM  *");printf("\n");
        printf("*  /N N===I    T3oo=VVV=o*");printf("\n");
        printf("* //N N   I    T    SSS o*");printf("\n");
        printf("*// ONO   O    T    RRR 3*");printf("\n");
        printf("*P  UMU        T    S S  *");printf("\n");
        printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            SS SS *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.����   2.����   3.����  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("��ʮ���ƣ���Ϊ�ϼƣ�");
            system("cls");
            return false;
        }else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkħ��ʦ*");printf("\n");
            printf("*   _/_  [6]        _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   O   |C C| *");printf("\n");
            printf("*  | V | [6]   T   |MMM| *");printf("\n");
            printf("*   OVO  ZXZ   T    MMM  *");printf("\n");
            printf("*  /N N===I    T3oo=VVV=o*");printf("\n");
            printf("* //N N   I    T    SSS o*");printf("\n");
            printf("*// ONO   O    T    RRR 3*");printf("\n");
            printf("*P  UMU        T    S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkħ��ʦ*");printf("\n");
            printf("*   _/_  [6]        _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |   | {6}   O   |C C| *");printf("\n");
            printf("*  |   | [6]   T   |MMM| *");printf("\n");
            printf("*        ZXZ   T    MMM  *");printf("\n");
            printf("*  /   ===I    T3oo=VVV=o*");printf("\n");
            printf("* //      I    T    SSS o*");printf("\n");
            printf("*//       O    T    RRR 3*");printf("\n");
            printf("*P             T    S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkkħ��ʦ*");printf("\n");
            printf("*                   _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*              T   |MMM| *");printf("\n");
            printf("*              T    MMM  *");printf("\n");
            printf("*   0          T3oo=VVV=o*");printf("\n");
            printf("*              T    SSS o*");printf("\n");
            printf("*              T    RRR 3*");printf("\n");
            printf("*              T    S S  *");printf("\n");
            printf("*                   S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkkħ��ʦ*");printf("\n");
            printf("*                   _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*  0000        T   |MMM| *");printf("\n");
            printf("* 0    0       T    MMM  *");printf("\n");
            printf("* 0    0       T3oo=VVV=o*");printf("\n");
            printf("* 0    0       T    SSS o*");printf("\n");
            printf("* 0    0       T    RRR 3*");printf("\n");
            printf("*  0000        T    S S  *");printf("\n");
            printf("*                   S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("* 000000000000  kkkħ��ʦ*");printf("\n");
            printf("*0            0     _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*0            0O   |C C| *");printf("\n");
            printf("*0            0T   |MMM| *");printf("\n");
            printf("*0            0T    MMM  *");printf("\n");
            printf("*0            0T3oo=VVV=o*");printf("\n");
            printf("*0            0T    SSS o*");printf("\n");
            printf("*0            0T    RRR 3*");printf("\n");
            printf("*0            0T    S S  *");printf("\n");
            printf("* 000000000000      S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����2500��ң�500����ֵ��");
                Player.EXP+=500;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=2500;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkħ��ʦ*");printf("\n");
            printf("*   _/_  [6]        _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   O   |C C| *");printf("\n");
            printf("*  | V | [6]   T   |MMM| *");printf("\n");
            printf("*   OVO  ZXZ   T    MMM  *");printf("\n");
            printf("*  /N N===I    T3oo=VVV=o*");printf("\n");
            printf("* //N N   I    T    SSS o*");printf("\n");
            printf("*// ONO   O    T    RRR 3*");printf("\n");
            printf("*P  UMU        T    S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkħ��ʦ*");printf("\n");
            printf("*   _/_  [6]        _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |   | {6}   O   |C C| *");printf("\n");
            printf("*  |   | [6]   T   |MMM| *");printf("\n");
            printf("*        ZXZ   T    MMM  *");printf("\n");
            printf("*  /   ===I    T3oo=VVV=o*");printf("\n");
            printf("* //      I    T    SSS o*");printf("\n");
            printf("*//       O    T    RRR 3*");printf("\n");
            printf("*P             T    S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkkħ��ʦ*");printf("\n");
            printf("*                   _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*              T   |MMM| *");printf("\n");
            printf("*              T    MMM  *");printf("\n");
            printf("*   0          T3oo=VVV=o*");printf("\n");
            printf("*              T    SSS o*");printf("\n");
            printf("*              T    RRR 3*");printf("\n");
            printf("*              T    S S  *");printf("\n");
            printf("*                   S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkkħ��ʦ*");printf("\n");
            printf("*                   _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*  0000        T   |MMM| *");printf("\n");
            printf("* 0    0       T    MMM  *");printf("\n");
            printf("* 0    0       T3oo=VVV=o*");printf("\n");
            printf("* 0    0       T    SSS o*");printf("\n");
            printf("* 0    0       T    RRR 3*");printf("\n");
            printf("*  0000        T    S S  *");printf("\n");
            printf("*                   S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("* 000000000000  kkkħ��ʦ*");printf("\n");
            printf("*0            0     _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*0            0O   |C C| *");printf("\n");
            printf("*0            0T   |MMM| *");printf("\n");
            printf("*0            0T    MMM  *");printf("\n");
            printf("*0            0T3oo=VVV=o*");printf("\n");
            printf("*0            0T    SSS o*");printf("\n");
            printf("*0            0T    RRR 3*");printf("\n");
            printf("*0            0T    S S  *");printf("\n");
            printf("* 000000000000      S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻�����ˣ�");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.����%d�Ż�Ѫ����\n",Player.k1);
            printf("w.����%d�������Ԫ����\n",Player.k2);
            printf("e.����%d�����һ�������\n",Player.k3);
            printf("r.����%d�ſ����лڷ���\n",Player.k4);
            printf("t.����%d�ž������\n",Player.k5);
            printf("y.����%d�Ŷ�����\n",Player.k6);
            printf("u.����%d�����Ǵ󷨷���\n",Player.k7);
            printf("i.����%d�Ŷ��¾Ž�����\n",Player.k8);
            printf("o.����%d����ˮ�񹦷���\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("�е�һ���泩��HP+500");Player.HP+=500;}else print("��û�У�");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("�о�һ�����һ��Ŀ������ȫ����HP+1000");Player.HP+=1000;}else print("��û�У�");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("���˫����ʹ�ò�ͬ����ʽ���˺�������");Player.ATK*=2;}else print("��û�У�");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("�Ʒ�һ���Ӻ��˳�ȥ��������ѣ�");sd=rand()%50000+1;HP-=sd;}else print("��û�У�");break;
                case 't':if (Player.k5>=1){Player.k5--;print("һ�ɾ޴���������˳�����");sd=rand()%80000+20000;HP-=sd;}else print("��û�У�");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("��꣡����");if ((rand()%21)%10==0)HP=0;}else print("��û�У�");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("�����񹦣�������");HP-=500;Player.HP+=500;}else print("��û�У�");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("���¾Ž���������أ�");Player.ATK*=9;};break;
                case 'o':if (Player.k9>=1){Player.k9--;print("��ˮ�񹦣����ż��ҵĻ𻨣�");sd=rand();HP-=sd;}else print("��û�У�");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkħ��ʦ*");printf("\n");
            printf("*   _/_  [6]        _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   O   |C C| *");printf("\n");
            printf("*  | V | [6]   T   |MMM| *");printf("\n");
            printf("*   OVO  ZXZ   T    MMM  *");printf("\n");
            printf("*  /N N===I    T3oo=VVV=o*");printf("\n");
            printf("* //N N   I    T    SSS o*");printf("\n");
            printf("*// ONO   O    T    RRR 3*");printf("\n");
            printf("*P  UMU        T    S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkħ��ʦ*");printf("\n");
            printf("*   _/_  [6]        _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |   | {6}   O   |C C| *");printf("\n");
            printf("*  |   | [6]   T   |MMM| *");printf("\n");
            printf("*        ZXZ   T    MMM  *");printf("\n");
            printf("*  /   ===I    T3oo=VVV=o*");printf("\n");
            printf("* //      I    T    SSS o*");printf("\n");
            printf("*//       O    T    RRR 3*");printf("\n");
            printf("*P             T    S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkkħ��ʦ*");printf("\n");
            printf("*                   _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*              T   |MMM| *");printf("\n");
            printf("*              T    MMM  *");printf("\n");
            printf("*   0          T3oo=VVV=o*");printf("\n");
            printf("*              T    SSS o*");printf("\n");
            printf("*              T    RRR 3*");printf("\n");
            printf("*              T    S S  *");printf("\n");
            printf("*                   S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkkħ��ʦ*");printf("\n");
            printf("*                   _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*  0000        T   |MMM| *");printf("\n");
            printf("* 0    0       T    MMM  *");printf("\n");
            printf("* 0    0       T3oo=VVV=o*");printf("\n");
            printf("* 0    0       T    SSS o*");printf("\n");
            printf("* 0    0       T    RRR 3*");printf("\n");
            printf("*  0000        T    S S  *");printf("\n");
            printf("*                   S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("* 000000000000  kkkħ��ʦ*");printf("\n");
            printf("*0            0     _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*0            0O   |C C| *");printf("\n");
            printf("*0            0T   |MMM| *");printf("\n");
            printf("*0            0T    MMM  *");printf("\n");
            printf("*0            0T3oo=VVV=o*");printf("\n");
            printf("*0            0T    SSS o*");printf("\n");
            printf("*0            0T    RRR 3*");printf("\n");
            printf("*0            0T    S S  *");printf("\n");
            printf("* 000000000000      S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����2100��ң�400����ֵ��");
                Player.EXP+=400;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=2100;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkħ��ʦ*");printf("\n");
            printf("*   _/_  [6]        _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   O   |C C| *");printf("\n");
            printf("*  | V | [6]   T   |MMM| *");printf("\n");
            printf("*   OVO  ZXZ   T    MMM  *");printf("\n");
            printf("*  /N N===I    T3oo=VVV=o*");printf("\n");
            printf("* //N N   I    T    SSS o*");printf("\n");
            printf("*// ONO   O    T    RRR 3*");printf("\n");
            printf("*P  UMU        T    S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkħ��ʦ*");printf("\n");
            printf("*   _/_  [6]        _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |   | {6}   O   |C C| *");printf("\n");
            printf("*  |   | [6]   T   |MMM| *");printf("\n");
            printf("*        ZXZ   T    MMM  *");printf("\n");
            printf("*  /   ===I    T3oo=VVV=o*");printf("\n");
            printf("* //      I    T    SSS o*");printf("\n");
            printf("*//       O    T    RRR 3*");printf("\n");
            printf("*P             T    S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkkħ��ʦ*");printf("\n");
            printf("*                   _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*              T   |MMM| *");printf("\n");
            printf("*              T    MMM  *");printf("\n");
            printf("*   0          T3oo=VVV=o*");printf("\n");
            printf("*              T    SSS o*");printf("\n");
            printf("*              T    RRR 3*");printf("\n");
            printf("*              T    S S  *");printf("\n");
            printf("*                   S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkkħ��ʦ*");printf("\n");
            printf("*                   _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*  0000        T   |MMM| *");printf("\n");
            printf("* 0    0       T    MMM  *");printf("\n");
            printf("* 0    0       T3oo=VVV=o*");printf("\n");
            printf("* 0    0       T    SSS o*");printf("\n");
            printf("* 0    0       T    RRR 3*");printf("\n");
            printf("*  0000        T    S S  *");printf("\n");
            printf("*                   S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("* 000000000000  kkkħ��ʦ*");printf("\n");
            printf("*0            0     _A_  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*0            0O   |C C| *");printf("\n");
            printf("*0            0T   |MMM| *");printf("\n");
            printf("*0            0T    MMM  *");printf("\n");
            printf("*0            0T3oo=VVV=o*");printf("\n");
            printf("*0            0T    SSS o*");printf("\n");
            printf("*0            0T    RRR 3*");printf("\n");
            printf("*0            0T    S S  *");printf("\n");
            printf("* 000000000000      S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻�����ˣ�");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_cike(){
    system("cls");
    string name="��ʬ";
    int HP=60000,MAXHP=60000,ATK=800,DEF=1;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}      kkk�̿�*");printf("\n");
        printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}      | $ $ |*");printf("\n");
        printf("*  | V | [6]     -+| V | *");printf("\n");
        printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
        printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
        printf("* //N N   I   -+    SSS o*");printf("\n");
        printf("*// ONO   O      -+ RRR-+*");printf("\n");
        printf("*P  UMU             S S  *");printf("\n");
        printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            SS SS *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.����   2.����   3.����  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("��ʮ���ƣ���Ϊ�ϼƣ�");
            system("cls");
            return false;
        }
        else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | 1 | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UM1             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* /1N 1   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O 1| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N==1I    +3oo=OOO=o*");printf("\n");
            printf("* //N 1   I   -+    SSS o*");printf("\n");
            printf("*// O1O   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |1 1| {6}      | $ $ |*");printf("\n");
            printf("*  1 V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N1N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /1 N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����1000��ң�4000����ֵ��");
                Player.EXP+=4000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=1000;
                system("cls");
                return true;
            }
            sd-=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | 1 | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UM1             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* /1N 1   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O 1| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N==1I    +3oo=OOO=o*");printf("\n");
            printf("* //N 1   I   -+    SSS o*");printf("\n");
            printf("*// O1O   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |1 1| {6}      | $ $ |*");printf("\n");
            printf("*  1 V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N1N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /1 N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻Ū���ˣ�");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.����%d�Ż�Ѫ����\n",Player.k1);
            printf("w.����%d�������Ԫ����\n",Player.k2);
            printf("e.����%d�����һ�������\n",Player.k3);
            printf("r.����%d�ſ����лڷ���\n",Player.k4);
            printf("t.����%d�ž������\n",Player.k5);
            printf("y.����%d�Ŷ�����\n",Player.k6);
            printf("u.����%d�����Ǵ󷨷���\n",Player.k7);
            printf("i.����%d�Ŷ��¾Ž�����\n",Player.k8);
            printf("o.����%d����ˮ�񹦷���\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("�е�һ���泩��HP+500");Player.HP+=500;}else print("��û�У�");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("�о�һ�����һ��Ŀ������ȫ����HP+1000");Player.HP+=1000;}else print("��û�У�");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("���˫����ʹ�ò�ͬ����ʽ���˺�������");Player.ATK*=2;}else print("��û�У�");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("�Ʒ�һ���Ӻ��˳�ȥ��������ѣ�");sd=rand()%50000+1;HP-=sd;}else print("��û�У�");break;
                case 't':if (Player.k5>=1){Player.k5--;print("һ�ɾ޴���������˳�����");sd=rand()%80000+20000;HP-=sd;}else print("��û�У�");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("��꣡����");if ((rand()%21)%10==0)HP=0;}else print("��û�У�");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("�����񹦣�������");HP-=500;Player.HP+=500;}else print("��û�У�");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("���¾Ž���������أ�");Player.ATK*=9;};break;
                case 'o':if (Player.k9>=1){Player.k9--;print("��ˮ�񹦣����ż��ҵĻ𻨣�");sd=rand();HP-=sd;}else print("��û�У�");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | 1 | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UM1             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* /1N 1   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O 1| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N==1I    +3oo=OOO=o*");printf("\n");
            printf("* //N 1   I   -+    SSS o*");printf("\n");
            printf("*// O1O   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |1 1| {6}      | $ $ |*");printf("\n");
            printf("*  1 V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N1N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /1 N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����300��ң�8000����ֵ��");
                Player.EXP+=8000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=300;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | 1 | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UM1             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* /1N 1   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O 1| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N==1I    +3oo=OOO=o*");printf("\n");
            printf("* //N 1   I   -+    SSS o*");printf("\n");
            printf("*// O1O   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |1 1| {6}      | $ $ |*");printf("\n");
            printf("*  1 V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N1N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk�̿�*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /1 N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻Ū���ˣ�");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_kkkk(){
    system("cls");
    string name="��ʬ";
    int HP=300000,MAXHP=300000,ATK=200,DEF=10;
    print("�㿴��kkksc06���˹������㶨��һ�����Ǽٵģ�");
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}    kkkksc06 *");printf("\n");
        printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}       |X X| *");printf("\n");
        printf("*  | V | [6]       | O | *");printf("\n");
        printf("*   OVO  ZXZ        CVD  *");printf("\n");
        printf("*  /N N===I     3oo=OOO  *");printf("\n");
        printf("* //N N   I     3oo=SSS  *");printf("\n");
        printf("*// ONO   O         RRR  *");printf("\n");
        printf("*P  UMU             S S  *");printf("\n");
        printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            SS SS *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.����   2.����   3.����  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("��ʮ���ƣ���Ϊ�ϼƣ�");
            system("cls");
            return false;
        }else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����10000��ң�1000����ֵ��");
                Player.EXP+=1000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=10000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻�����ˣ�");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.����%d�Ż�Ѫ����\n",Player.k1);
            printf("w.����%d�������Ԫ����\n",Player.k2);
            printf("e.����%d�����һ�������\n",Player.k3);
            printf("r.����%d�ſ����лڷ���\n",Player.k4);
            printf("t.����%d�ž������\n",Player.k5);
            printf("y.����%d�Ŷ�����\n",Player.k6);
            printf("u.����%d�����Ǵ󷨷���\n",Player.k7);
            printf("i.����%d�Ŷ��¾Ž�����\n",Player.k8);
            printf("o.����%d����ˮ�񹦷���\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("�е�һ���泩��HP+500");Player.HP+=500;}else print("��û�У�");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("�о�һ�����һ��Ŀ������ȫ����HP+1000");Player.HP+=1000;}else print("��û�У�");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("���˫����ʹ�ò�ͬ����ʽ���˺�������");Player.ATK*=2;}else print("��û�У�");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("�Ʒ�һ���Ӻ��˳�ȥ��������ѣ�");sd=rand()%50000+1;HP-=sd;}else print("��û�У�");break;
                case 't':if (Player.k5>=1){Player.k5--;print("һ�ɾ޴���������˳�����");sd=rand()%80000+20000;HP-=sd;}else print("��û�У�");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("��꣡����");if ((rand()%21)%10==0)HP=0;}else print("��û�У�");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("�����񹦣�������");HP-=500;Player.HP+=500;}else print("��û�У�");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("���¾Ž���������أ�");Player.ATK*=9;};break;
                case 'o':if (Player.k9>=1){Player.k9--;print("��ˮ�񹦣����ż��ҵĻ𻨣�");sd=rand();HP-=sd;}else print("��û�У�");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����10000��ң�1000����ֵ��");
                Player.EXP+=1000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=10000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("�㱻�����ˣ�");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_KKKKK(){
    system("cls");
    string name="��ʬ";
    int HP=1000000,MAXHP=1000000,ATK=999999,DEF=100;
    print("������ҵģ��������ߣ�����");printf("\n");
    print("�ߺߣ������X������");printf("\n");
    print("��ԶĤ���Ұɣ�����");printf("\n");
    print("kkksc06��ħ���ó��˾�ǿţ�����ڣ�");printf("\n");
    print(" ");
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}     kkksc06 *");printf("\n");
        printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6} +==+  |E E| *");printf("\n");
        printf("*  | V | [6] |  |  | V | *");printf("\n");
        printf("*   OVO  ZXZ   ǿ�� HHH  *");printf("\n");
        printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
        printf("* //N N   I    ţ��  H  o*");printf("\n");
        printf("*// ONO   O  |  |   HHH 3*");printf("\n");
        printf("*P  UMU      +==+   S S  *");printf("\n");
        printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            SS SS *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.����   2.����   3.����  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("�Ҳ�������ˣ��ݰݣ�");
            system("cls");
            return false;
        }else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+ =======*");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   ǿ�� HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    ţ��  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   ǿ�� HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    ţ��  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U       ======S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   ǿ�� HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    ţ��  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            ======*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ  =======HH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    ţ��  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   ǿ�� HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    ţ��  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +=========  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����10000��ң�1000����ֵ��Ȼ��������������");
                Player.EXP+=1000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=10000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            for (int i=1;i<=10;++i)
            print("kkksc06���X�m�������������������");
            printf("%d",sd);
            print("���˺���");
            if (Player.HP<=0){
                print("�㱻�����ˣ�");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.����%d�Ż�Ѫ����\n",Player.k1);
            printf("w.����%d�������Ԫ����\n",Player.k2);
            printf("e.����%d�����һ�������\n",Player.k3);
            printf("r.����%d�ſ����лڷ���\n",Player.k4);
            printf("t.����%d�ž������\n",Player.k5);
            printf("y.����%d�Ŷ�����\n",Player.k6);
            printf("u.����%d�����Ǵ󷨷���\n",Player.k7);
            printf("i.����%d�Ŷ��¾Ž�����\n",Player.k8);
            printf("o.����%d����ˮ�񹦷���\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("�е�һ���泩��HP+500");Player.HP+=500;}else print("��û�У�");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("�о�һ�����һ��Ŀ������ȫ����HP+1000");Player.HP+=1000;}else print("��û�У�");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("���˫����ʹ�ò�ͬ����ʽ���˺�������");Player.ATK*=2;}else print("��û�У�");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("�Ʒ�һ���Ӻ��˳�ȥ��������ѣ�");sd=rand()%50000+1;HP-=sd;}else print("��û�У�");break;
                case 't':if (Player.k5>=1){Player.k5--;print("һ�ɾ޴���������˳�����");sd=rand()%80000+20000;HP-=sd;}else print("��û�У�");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("��꣡����");if ((rand()%21)%10==0)HP=0;}else print("��û�У�");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("�����񹦣�������");HP-=500;Player.HP+=500;}else print("��û�У�");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("���¾Ž���������أ�");Player.ATK*=9;};break;
                case 'o':if (Player.k9>=1){Player.k9--;print("��ˮ�񹦣����ż��ҵĻ𻨣�");sd=rand();HP-=sd;}else print("��û�У�");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+ =======*");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   ǿ�� HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    ţ��  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   ǿ�� HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    ţ��  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U       ======S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   ǿ�� HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    ţ��  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            ======*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ  =======HH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    ţ��  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *�з�Ѫ����%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   ǿ�� HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    ţ��  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +=========  *");printf("\n");
            printf("*   U U             S S  *�ҷ�Ѫ����%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.����   2.����   3.����  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("��Ӯ�ˣ����10000��ң�1000����ֵ��Ȼ��������������");
                Player.EXP+=1000000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=100000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            for (int i=1;i<=10;++i)
            print("kkksc06��������ҵ�!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!v!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
            printf("%d",sd);
            print("���˺���");
            if (Player.HP<=0){
                print("�㱻�����ˣ�");
                exit(1);
            }
        }
        system("cls");
    }
}
int main(){
    print("��������ĳ����ɰ��������㱻kkksc06��ħ��ץ��������ʿ��Ϊ�������������ȳ�������ɣ���");
    system("cls");
    srand(time(NULL));
    Player.HP=1000;Player.MAXHP=1000;
    Player.LV=1;Player.EXP=0;Player.MAXEXP=500;
    Player.ATK=200;Player.DEF=5;
    Player.Money=100;
    for (int i=1;i<=4;++i){
        cout<<"������|";
        Sleep(200);
        system("cls");
        cout<<"������/";
        Sleep(200);
        system("cls");
        cout<<"������-";
        Sleep(200);
        system("cls");
        cout<<"������\\";
        Sleep(200);
        system("cls");
    }
    cout<<"��W����A����S����D���ƶ�������E���鿴״̬��"<<endl;
    Sleep(1000);
    cout<<"�̵������ſڣ�|���������F�����룡����B��ʹ�õ���!"<<endl;
    Sleep(1000);
    cout<<"�л���ͼ�����ſ���������F������Q���鿴��ķ���"<<endl;
    Sleep(4000);
    system("cls");
    go(0);
    while (1){
        cout<<mapname[where]<<endl;
        for (int i=0;i<20;++i)
            cout<<maps[where][i]<<endl;
        printf("HP:   %d  /  %d",Player.HP,Player.MAXHP);
        qwe=_getch();
        system("cls");
        switch (qwe){
            case 'w':if (maps[where][x-1][y]==' '){swap(maps[where][x-1][y],maps[where][x][y]);x-=1;};break;
            case 'a':if (maps[where][x][y-1]==' '){swap(maps[where][x][y-1],maps[where][x][y]);y-=1;};break;
            case 's':if (maps[where][x+1][y]==' '){swap(maps[where][x+1][y],maps[where][x][y]);x+=1;};break;
            case 'd':if (maps[where][x][y+1]==' '){swap(maps[where][x][y+1],maps[where][x][y]);y+=1;};break;
            case 'f':{
                switch (where){
                    case 0:{
                        if (x==2&&y==4)
                            shop1();
                        else if (x==6&&y==4)
                            shop2();
                        else if (x==10&&y==4)
                            shop3();
                        else if (x==7&&y==19)
                            go(1);
                        else if (x==17&&y==15)
                            switch (rand()%3+1){
                                case 1:fight_to_jiangshi();break;
                                case 2:fight_to_kulipa();break;
                                case 3:fight_to_sheshou();break;
                            }
                        else if (x==18&&y==15){
                            fight_to_jiangshiwang();
                        }
                        break;
                    }
                    case 1:{
                        if (x==7&&y==0)
                            go(0);
                        else if (x==19&&y==16)
                            go(2);
                        else if (x==10&&y==9){
                            fight_to_kkk();
                        }
                        break;
                    }
                    case 2:{
                        if (x==0&&y==16)
                            go(1);
                        else if (x==9&&y==11)
                            sp();
                        else if (x==7&&y==0)
                            go(3);
                        break;
                    }
                    case 3:{
                        if (x==7&&y==19)
                            go(2);
                        else if (x==1&&y==1)
                            shop4();
                        else if (x==11&&y==0)
                            go(4);
                        if (x==17&&y==15)
                            switch(rand()%3+1){
                                case 1:fight_to_kkkshiwei();break;
                                case 2:fight_to_kkkmofashi();break;
                                case 3:fight_to_cike();break;
                            }
                        if (x==18&&y==15){
                            fight_to_kkkk();
                        }
                        break;
                    }
                    case 4:{
                        if (x==11&&y==19)
                            go(3);
                        else if (x==10&&y==1){
                            fight_to_KKKKK();
                        }
                        break;
                    }
                }
                break;
            }
            case 'e':{
                system("cls");
                printf("����%dö��ң�\n",Player.Money);
                printf("��������%d����\n",Player.LV);
                printf("�����ھ�����%d/%d\n",Player.EXP,Player.MAXEXP);
                printf("�㹥������%d\n",Player.ATK);
                printf("���������%d\n",Player.DEF);
                qwe=_getch();
                system("cls");
                break;
            }
            case 'b':{
                system("cls");
                printf("1.����  %d\n",Player.q1);
                printf("2.�����ݺᵤ  %d\n",Player.q2);
                printf("3.����ɵ�  %d\n",Player.q3);
                printf("4.��լ���ֵ�  %d\n",Player.q4);
                printf("5.�׶���  %d\n",Player.q5);
                printf("6.��������  %d\n",Player.s1);
                printf("7.���ֳ���  %d\n",Player.s2);
                printf("8.��ɽ��  %d\n",Player.s3);
                printf("9.�����ǹ  %d\n",Player.s4);
                printf("a.ʯ����  %d\n",Player.s5);
                printf("b.���ľ�  %d\n",Player.d1);
                printf("c.������  %d\n",Player.d2);
                printf("d.�������  %d\n",Player.d3);
                printf("e.̹��Ƥ  %d\n",Player.d4);
                printf("f.�������  %d\n",Player.d5);
                qwe=_getch();
                switch(qwe){
                    case '1':{
                        if (Player.q1>=1){
                            Player.q1--;
                            Player.HP+=200;
                            print("�����200��HP");
                            if (Player.HP>Player.MAXHP)
                                Player.HP=Player.MAXHP;
                            system("cls");
                        }
                        break;
                    }
                    case '2':{
                        if (Player.q2>=1){
                            Player.q2--;
                            Player.HP+=200;
                            Player.ATK+=20;
                            print("������Լ���������������������20��");
                            system("cls");
                        }
                        break;
                    }
                    case '3':{
                        if (Player.q3>=1){
                            Player.q3--;
                            Player.HP+=200;
                            Player.DEF+=5;
                            print("������Լ���ǹ���룬����������5��");
                            system("cls");
                        }
                        break;
                    }
                    case '4':{
                        if (Player.q4>=1){
                            Player.q4--;
                            Player.HP+=200;
                            Player.MAXHP+=60;
                            print("������Լ������ٸɣ��������ֵ����60�㣡");
                            system("cls");
                        }
                        break;
                    }
                    case '5':{
                        if (Player.q5>=1){
                            Player.HP+=200;
                            print("�㻺�����º׶��죡");printf("\n");
                            print("������Լ�ʱ�ղ����ˣ�");printf("\n");
                            print("���ǵģ���");printf("\n");
                            print("���ʲôҪ�����ֶ����أ�");printf("\n");
                            print("����������˵�����ж���");printf("\n");
                            print("��������о��ǲ�����");printf("\n");
                            print("������ˣ�");printf("\n");
                            print("�ǺǺ�");printf("\n");
                            print("exit(0)");printf("\n");
                            print("Ȼ���㲢û������ֻ���˷���500��Ҷ��ѡ�");printf("\n");
                        }
                        break;
                    }
                    case '6':{
                        if (Player.s1>=1){
                            Player.ATK+=100;
                            Player.s1--;
                        }
                        break;
                    }
                    case '7':{
                        if (Player.s2>=1){
                            Player.ATK+=200;
                            Player.s2--;
                        }
                        break;
                    }
                    case '8':{
                        if (Player.s3>=1){
                            Player.ATK+=300;
                            Player.s3--;
                        }
                        break;
                    }
                    case '9':{
                        if (Player.s4>=1){
                            Player.ATK+=500;
                            Player.s4--;
                        }
                        break;
                    }
                    case 'a':{
                        if (Player.s5>=1){
                            Player.ATK+=1000;
                            Player.s5--;
                        }
                        break;
                    }
                    case 'b':{
                        if (Player.d1>=1){
                            Player.DEF+=10;
                            Player.d1--;
                        }
                        break;
                    }
                    case 'c':{
                        if (Player.d2>=1){
                            Player.DEF+=20;
                            Player.d2--;
                        }
                        break;
                    }
                    case 'd':{
                        if (Player.d3>=1){
                            Player.DEF+=30;
                            Player.d3--;
                        }
                        break;
                    }
                    case 'e':{
                        if (Player.d4>=1){
                            Player.DEF+=40;
                            Player.d4--;
                        }
                        break;
                    }
                    case 'f':{
                        if (Player.d5>=1){
                            Player.DEF+=100;
                            Player.d5--;
                        }
                        break;
                    }
                }
                system("cls");
                break;
            }
            case 'q':{
                system("cls");
                printf("����%d�Ż�Ѫ����\n",Player.k1);
                printf("����%d�������Ԫ����\n",Player.k2);
                printf("����%d�����һ�������\n",Player.k3);
                printf("����%d�ſ����лڷ���\n",Player.k4);
                printf("����%d�ž������\n",Player.k5);
                printf("����%d�Ŷ�����\n",Player.k6);
                printf("����%d�����Ǵ󷨷���\n",Player.k7);
                printf("����%d�Ŷ��¾Ž�����\n",Player.k8);
                printf("����%d����ˮ�񹦷���\n",Player.k9);
                qwe=_getch();
                system("cls");
                break;
            }
        }
    }
}