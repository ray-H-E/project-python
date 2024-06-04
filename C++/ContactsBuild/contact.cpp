#include<iostream>
using namespace std;

#define MAX 1000 //最大人数


//封装函数 显示菜单
void showMenu(){
    cout << "*************************" << endl;
    cout << "***** 1、添加联系人 *****" << endl;
    cout << "***** 2、显示联系人 *****" << endl;
    cout << "***** 3、删除联系人 *****" << endl;
    cout << "***** 4、查找联系人 *****" << endl;
    cout << "***** 5、修改联系人 *****" << endl;
    cout << "***** 6、清空联系人 *****" << endl;
    cout << "***** 0、退出通讯录 *****" << endl;
    cout << "*************************" << endl;
}

struct People{
    string name; //联系人
    int sex; //性别 1 男 2 女
    int age; //年龄
    string phone; //电话号码
    string address; //住址
};

struct Contact
{
    struct People peopleArray[MAX]; //通讯录中保存的联系人数组
    int Msize; //通讯录中当前人员数
};

void addPeople(Contact *ct){
    if (ct->Msize == MAX)
    {
        /* code */
        cout <<"通讯录已满" << endl;
        return;
    }else{
        People person;
        // string name; //联系人
        // int sex; //性别 1 男 2 女
        // int age; //年龄
        // string phone; //电话号码
        // string address; //住址
        //姓名
        cout << "Please insert name" << endl;
        cin >> person.name;
        ct->peopleArray[ct->Msize].name = person.name;

        //性别
        cout << "Please insert sex" << endl;
        cout << "Man 1  Woman 2" << endl;
        person.sex = 0;
        while (true)
        {
            cin >> person.sex;
            if(person.sex == 1 || person.sex == 2){
                ct->peopleArray[ct->Msize].sex = person.sex;
                break;
            }else{
                cout << "The input is invalid!Please re-enter!" << endl;
            } 
        }

        //年龄
        cout << "Please insert age" << endl;
        person.age = 0;
        cin >> person.age;
        ct->peopleArray[ct->Msize].age = person.age;

        //电话号码
        cout << "Please insert phone" << endl;
        cin >> person.phone;
        ct->peopleArray[ct->Msize].phone = person.phone;

        //地址
        cout << "Please insert address" << endl;
        cin >> person.address;
        ct->peopleArray[ct->Msize].address = person.address;
    }
    //判断通讯录size
    ct->Msize++;
    cout << "The addition was successful!" << endl;
    system("pause");
}

showPeople(Contact *ct){
    if (ct->Msize == 0)
    {
        cout << "Void" << endl;
    }else{
        int a = 0;
        for(People p : ct->peopleArray){
            if (a < ct->Msize)
            {
                a++;
                // cout << "********* a: " << a << endl;
                cout << "Name: " << p.name << "\t";
                cout << (p.sex == 1 ? "Man" : "Woman") << "\t";
                // if (p.sex == 1)
                // {
                //     cout << "Sex: Man" << endl;
                // }else if (p.sex == 2)
                // {
                //     cout << "Sex: Woman" << endl;
                // }
                cout << "Age: " <<  p.age << "\t";
                cout << "Phone: " << p.phone << "\t";
                cout << "Address: " << p.address << endl;            
            }else{
                break;
            }          
        }
    }
    
    system("pause");

}

int findPeople(Contact *ct){
    string fName;
    cout << "Input Name to FIND!" << endl

    cin >> fName;
    int a = 0;
    for(People p : ct->peopleArray){
        if (a < ct->Msize)
        {
            
            a++;
        }else{
            break;
        }          
    }

    return a;
}

void deletePeople(Contact *ct){

}

int main(){
    //创建结构体变量
    Contact ct;
    //初始化ct中的size
    ct.Msize = 0;


    int select = 0; // 初始化选择变量

    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1://1、添加联系人
            addPeople(&ct);
            break;
        case 2://2、显示联系人
            showPeople(&ct);
            break;
        case 3://3、删除联系人
            deletePeople(&ct);
            break;
        case 4://4、查找联系人
            
            break;
        case 5://5、修改联系人
            
            break;
        case 6://6、清空联系人
            
            break;
        case 0://0、退出通讯录
            cout << "OUT!" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }
    

    

    system("pause");
    return 0;
}