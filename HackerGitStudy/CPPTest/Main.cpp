#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
using namespace std;

//	�� ������ �ذ����� ������, �ش� �������� commit �� ��.
//	commit �޽����� �����Ӱ� �ص� �˴ϴ�.
/*
	int main(){
		int *arr = new int[100];
		int temp;
		srand(time(NULL));
		for (int i = 0; i < 100; i++)
		{
			arr[i] = rand() % 100;
		}
		for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < 100; j++)
			{
				if (arr[i] < arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}

		}
		for (int i = 0; i < 100; i++){
			cout << arr[i] << ' ';
		}
		cout << endl;

	return 0;
	}
	*/
/*
#include "person.h"
#include <string>
#include <iostream>
using namespace std;
class person{
public:
	string name;
	int age;
	bool isalive;
	void talk(){
		cout << "hello world" << endl;
	}
	void sleep(){
		cout << "zzz" << endl;
	}
};
int main(){
	person p1 = { "ġ��", 20 };
	int a;
	cout << p1.name << ' ' << p1.age << endl;
	cout << "1 - ��Ƴ� ,  2 - ��" << endl;
	cin >> a;
	if (a == 1)
		p1.isalive = true;
	else
		p1.isalive = false;
	if (p1.isalive == true)
	{
		p1.talk();
	}
	else if(p1.isalive == false)
	{
		p1.sleep();
	}
	return 0;
}*/

/*
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct subject {
	string itemName;
	int score;
};
struct student {
	string name;		// �л��̸�
	int subjectCount;	// ���ð����
	subject* pitem;		// ���� ���
};
int main(){
	ifstream fin;
	fin.open("list.txt");
	fin.close();
	student* arr = new student[6];
	fin.open("list.txt");
	for (int i = 0; i < 6; i++)
	{
		fin >> arr[i].name >> arr[i].subjectCount;
		cout << "�̸� : " << arr[i].name << " ���ð���� : " << arr[i].subjectCount << ' ';
		subject* pitem = new subject[arr[i].subjectCount];
		for (int j = 0; j < arr[i].subjectCount; j++)
		{
			fin >> pitem[j].itemName >> pitem[j].score;
			cout << pitem[j].itemName << ":" << pitem[j].score << ' ';
		}
		cout << endl;
	}
	return 0;
}
*/

// ��Ƴ׿�...