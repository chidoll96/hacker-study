#include <iostream>
using namespace std;

//	각 문제를 해결했을 때마다, 해당 시점에서 commit 할 것.
//	commit 메시지는 자유롭게 해도 됩니다.

/*
int main()
{
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
/*#include "person.h"
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
	person p1 = { "치섭", 20 };
	int a;
	cout << p1.name << ' ' << p1.age << endl;
	cout << "1 - 살아남 ,  2 - 잠" << endl;
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

	//  3번
	//	반 성적 관리 시스템
    //  학생(student)에 대한 구조체와 응시과목(item)에 대한 구조체를 만든다.
    //
    //  list.txt 파일을 읽어들여 main에서 student* 포인터를 이용하여 인원별로 동적할당
    //  또한 응시과목별로 subject에 대한 동적할당을 구현한다.
    //  파일에서 모든 데이터를 읽었다면
    //  맨 위에는 "총 응시인원: 00명" 을 표시하고,
    //  학생이름: 이름 / 응시과목수: 0개 / 과목1: 00, 과목2: 00, 과목3: 00 ...
    //  와 같은 꼴로 출력한다.
    //
    //  추가로 현재 데이터에 한명만 직접 콘솔에서 추가하여
    //  총 응시인원과 새로운 학생에 대한 점수를 출력하는 코드를 만들어보실 것!
    //
    //  struct subject {
    //      string itemName;
    //      int score;
    //  };
    //  struct student {
    //      string name;		// 학생이름
    //      int subjectCount;	// 응시과목수
    //      subject* pItem;		// 과목 목록
    //  };


	
	//	4번
	//	교육자에게 하고싶은 말을 적으시오.
	//	
	return 0;
}