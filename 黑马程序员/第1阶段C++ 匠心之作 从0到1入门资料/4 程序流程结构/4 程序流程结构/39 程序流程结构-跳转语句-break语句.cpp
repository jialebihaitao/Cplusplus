#define _CRT_SECURE_NO_WARNINGS

////1����switch �����ʹ��break
//#include<iostream>
//using namespace std;
//int main() 
//{
//	//1����switch �����ʹ��break
//	cout << "��ѡ������ս�������Ѷȣ�" << endl;
//	cout << "1����ͨ" << endl;
//	cout << "2���е�" << endl;
//	cout << "3������" << endl;
//
//	int num = 0;//����ѡ�����ı���
//
//	cin >> num;//�ȴ��û�����
//
//	switch (num)
//	{
//	case 1:
//		cout << "��ѡ�������ͨ�Ѷ�" << endl;
//		break;//�˳�switch���
//	case 2:
//		cout << "��ѡ������е��Ѷ�" << endl;
//		break;
//	case 3:
//		cout << "��ѡ����������Ѷ�" << endl;
//		break;
//	default:
//		break;
//	}
//
//	system("pause");
//
//	return 0;
//}

//2����ѭ���������break
//#include<iostream>
//using namespace std;
//int main() 
//{
//	
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			break; //�˳�ѭ�����
//		}
//		cout << i << endl;//0 1  2 3 4
//	}
//
//	system("pause");
//
//	return 0;
//}

//3.��Ƕ��ѭ�������ʹ��break���˳��ڲ�ѭ��
#include<iostream>
using namespace std;
int main() 
{	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;//�����˳��ڲ�ѭ��
			}
			cout << "*" << " ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}