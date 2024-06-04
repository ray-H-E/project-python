#include<iostream>
using namespace std;

#define MAX 1000 //�������


//��װ���� ��ʾ�˵�
void showMenu(){
    cout << "*************************" << endl;
    cout << "***** 1�������ϵ�� *****" << endl;
    cout << "***** 2����ʾ��ϵ�� *****" << endl;
    cout << "***** 3��ɾ����ϵ�� *****" << endl;
    cout << "***** 4��������ϵ�� *****" << endl;
    cout << "***** 5���޸���ϵ�� *****" << endl;
    cout << "***** 6�������ϵ�� *****" << endl;
    cout << "***** 0���˳�ͨѶ¼ *****" << endl;
    cout << "*************************" << endl;
}

struct People{
    string name; //��ϵ��
    int sex; //�Ա� 1 �� 2 Ů
    int age; //����
    string phone; //�绰����
    string address; //סַ
};

struct Contact
{
    struct People peopleArray[MAX]; //ͨѶ¼�б������ϵ������
    int Msize; //ͨѶ¼�е�ǰ��Ա��
};

void addPeople(Contact *ct){
    if (ct->Msize == MAX)
    {
        /* code */
        cout <<"ͨѶ¼����" << endl;
        return;
    }else{
        People person;
        // string name; //��ϵ��
        // int sex; //�Ա� 1 �� 2 Ů
        // int age; //����
        // string phone; //�绰����
        // string address; //סַ
        //����
        cout << "Please insert name" << endl;
        cin >> person.name;
        ct->peopleArray[ct->Msize].name = person.name;

        //�Ա�
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

        //����
        cout << "Please insert age" << endl;
        person.age = 0;
        cin >> person.age;
        ct->peopleArray[ct->Msize].age = person.age;

        //�绰����
        cout << "Please insert phone" << endl;
        cin >> person.phone;
        ct->peopleArray[ct->Msize].phone = person.phone;

        //��ַ
        cout << "Please insert address" << endl;
        cin >> person.address;
        ct->peopleArray[ct->Msize].address = person.address;
    }
    //�ж�ͨѶ¼size
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
    //�����ṹ�����
    Contact ct;
    //��ʼ��ct�е�size
    ct.Msize = 0;


    int select = 0; // ��ʼ��ѡ�����

    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1://1�������ϵ��
            addPeople(&ct);
            break;
        case 2://2����ʾ��ϵ��
            showPeople(&ct);
            break;
        case 3://3��ɾ����ϵ��
            deletePeople(&ct);
            break;
        case 4://4��������ϵ��
            
            break;
        case 5://5���޸���ϵ��
            
            break;
        case 6://6�������ϵ��
            
            break;
        case 0://0���˳�ͨѶ¼
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