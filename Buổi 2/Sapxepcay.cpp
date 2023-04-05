//https://www.youtube.com/watch?v=AxvORDSnOnA
#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* pleft;
	struct node* pright;
};
typedef node Node;
typedef node* TREE;

void KhoiTaoCay(TREE& t)
{
	t = NULL;
}

void ThemNodeVaoCay(TREE& t, int x)
{
	if (t == NULL)
	{
		node* p = new node;
		p->data = x;
		p->pleft = NULL;
		p->pright = NULL;
		t = p;
	}
	else
	{
		if (t->data > x)
		{
			ThemNodeVaoCay(t->pleft, x);
		}
		else if (t->data < x)
		{
			ThemNodeVaoCay(t->pright, x);

		}
	}
}

void DuyetNLR(TREE t)
{
	if (t != NULL)
	{
		cout << t->data << "   ";
		DuyetNLR(t->pleft);
		DuyetNLR(t->pright);
	}
}

void Menu(TREE& t)
{
	while (true)
	{
		system("cls");
		cout << "1.Nhap du lieu"<<endl;
		cout << "2.Xuat du lieu cay"<<endl;
		cout << "0.Ket thuc"<<endl;
		int lc;
		cout << "Nhap lua chon:";
		cin >> lc;
		if (lc < 0 || lc>2)
		{
			cout << "Lua chon khong dung vui long chon lai";
			system("pause");
		}
		else if (lc == 1)
		{
			int x;
			cout << "Nhap vao so nguyen x:";
			cin >> x;
			ThemNodeVaoCay(t, x);
		}
		else if (lc == 2)
		{
			cout << "Duyet theo NLR\n";
			DuyetNLR(t);
			system("pause");
		}
		else
			break;
	}
}
int main()
{
	TREE t;
	KhoiTaoCay(t);
	Menu(t);
	return 0;
}