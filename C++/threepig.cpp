#include<iostream>
using namespace std;

int main(){
    int pig_1,pig_2,pig_3;
    cin >> pig_1;
    cin >> pig_2;
    cin >> pig_3;

    if (pig_1 > pig_2 && pig_1 > pig_3)
    {
        cout << "pig_1最重" << endl;
    }else if(pig_2 > pig_1 && pig_2 > pig_3)
    {
        cout << "pig_2最重" << endl;
    }else if(pig_3 > pig_1 && pig_3 > pig_2)
    {
        cout << "pig_3最重" << endl;
    }else{
        cout << "ERROR" << endl;
    }

    int pigs[3];
    pigs[0] = pig_1;
    pigs[1] = pig_2;
    pigs[2] = pig_3;
    int temp;
    for (int i = 0; i < 3; i++)
    {
        temp = 0;
        for (int j = 0; j < 2; j++)
        {
            if (pigs[j]<pigs[j+1])
            {
                temp = pigs[j+1];
                pigs[j+1] = pigs[j];
                pigs[j] = temp;
            }
        }
    }

    if (pigs[0] == pig_1)
    {
        cout << "pig_1最重" << endl;
    }else if (pigs[0] == pig_2)
    {
        cout << "pig_2最重" << endl;
    }else if (pigs[0] == pig_3)
    {
        cout << "pig_3最重" << endl;
    }else{
        cout << "ERROR" << endl;
    }
    
    
    

    return 0;
}