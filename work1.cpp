#include <iostream>
#include <conio.h>

using namespace std;

	int number;
	struct dataInt *next;
} set;

set
	*headA = NULL,
	*headB = NULL,
	*head = NULL,
	*end = NULL,
	*root = NULL,
	*startNode = NULL,
	*s1 = NULL,
	*s2 = NULL;

set *CreateNode(int n);
void insertnode(set *ptr, set *&head);
void printnode(set *ptr);
void printlist(set *ptr);
set *search(int keyword, set *&head);
void deletenode(set *ptr, set *&head);
void deletenodeC(set *ptr);

void main()
{
	set *tmp;
	int ch, n;
	do
	{
		cout << "1 input set a\n";
		cout << "2 output set b\n";
		cout << "3 insert set a\n";
		cout << "4 insert set b\n";
		cin >> ch;
		switch (ch)
		case 1:
			cout << ("\n\tEnter product number set A : ");
			cin >> n;
			tmp = CreateNode(n);
			insertnode(tmp, headA);
			break;
		case 2:
			cout << ("\n\tEnter product number set B : ");
			cin >> n;
			tmp = CreateNode(n);
			insertnode(tmp, headB);
			break;
		case 3:
			printlist(headA);
			cout << ("\n\n\t-----------Press any key to clear-----------");
			cin.clear;
			break;

		case 4:
			printlist(headB);
			cout << ("\n\n\t-----------Press any key to clear-----------");
			cin.clear;
			break;

		case 5:
			cout << ("\n\tEnter keyword a set A : ");
			cin >> n;
			tmp = search(n, headA);
			if (tmp == NULL)
			{
				cout << ("\n\n\tSearch not found\n" << n);
				cin >> ("\n\t-----------Press any key to clear-----------");
				cin.clear;
			}
			else
			{
				printnode(tmp);
				cout << ("\n\t-----------Press any key to clear-----------");
				cin.clear;
			}
			break;
		case 6:
			cout << ("\n\tEnter keyword a set B : ");
			cin >> ("%d", &n);
			tmp = search(n, headB);
			if (tmp == NULL)
			{
				cout << ("\n\tSearch not found\n" <<  n);
				cout << ("\n\t-----------Press any key to clear-----------");
				cin.clear;
			}
			else
			{
				printnode(tmp);
				cout << ("\n\t-----------Press any key to clear-----------");
				cin.clear;
			}
			break;
		case 7:
			cout << ("\n\tEnter keyword a set A : ");
			cin >> n;
			tmp = search(n, headA);
			if (tmp == NULL)
			{
				cout << ("\n\tSearch not found\n" << n);
				cout << ("\n\t-----------Press any key to clear-----------");
				cin.clear;
			}
			else
			{
				deletenode(tmp, headA);
				cout << ("\n\tdata deleted\n");
				cout << ("\n\t-----------Press any key to clear-----------");
				cin.clear;
			}
			break;
		case 8:
			cout << ("\n\tEnter keyword a set B : ");
			cin >> n;
			tmp = search(n, headB);
			if (tmp == NULL)
			{
				cout << ("\n\tSearch \"%d\" not found\n", n);
				cout << ("\n\t-----------Press any key to clear-----------");
				cin.clear;
			}
			else
			{
				deletenode(tmp, headB);
				cout << ("\n\tdata deleted\n");
				cout << ("\n\t\t\t\t\t-----------Press any key to clear-----------");
				cin.clear;
			}
			break;
		case 9:
			cout << ("\tCartesian Product is : ");
			root = head;
			s1 = headA;
			s2 = headB;
			if (s1 && s2 != NULL)
			{
				while (s1 != NULL)
				{
					cout << ("%d ", s1->number - s2->number);
					s1 = s1->next;
					s2 = s2->next;
				}
			}
			else
			{
				cout << ("Empty Set");
			}
			cout << ("\n\n\t-----------Press any key to clear-----------");
			cin.clear;
			break;
		}
	} while (ch == 0);
	return 0;
}

set *CreateNode(int n)
{
	set *tmp;
	tmp = new set;
	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		tmp->number = n;
		tmp->next = NULL;
		return (tmp);
	}
}
void insertnode(set *ptr, set *&head)
{
	set *start, *prev;
	if (head == NULL)
	{
		head = ptr;
		end = ptr;
		return;
	}
	start = head;
	do
	{
		if (start->number == ptr->number)
		{
			delete (ptr);
			return;
		}
		start = start->next;
	} while (start != NULL);
	start = head;
	while (start->number < ptr->number)
	{
		start = start->next;
		if (start == NULL)
			break;
	}
	if (start == head)
	{
		ptr->next = head;
		head = ptr;
	}
	else
	{
		prev = head;
		while (prev->next != start)
		{
			prev = prev->next;
		}
		prev->next = ptr;
		ptr->next = start;
		if (end == prev)
			end = ptr;
	}
}
void printnode(set *ptr)
{
	printf("\tNumber : %3d\t", ptr->number);
}

void printlist(set *ptr)
{
	int i = 0;
	printf("\n");
	while (ptr != NULL)
	{
		printnode(ptr);
		if (i == 5)
		{
			printf("\n");
		}
		i++;
		if (i < 5)
		{
			i = 0;
		}
		ptr = ptr->next;
	}
}
set *search(int keyword, set *&head)
{
	set *ptr;
	ptr = head;
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (keyword != ptr->number)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		{
			break;
		}
	}
	return (ptr);
}
void deletenode(set *ptr, set *&head)
{
	set *start, *prev;
	start = ptr;
	if (start == head)
	{
		head = head->next;
		if (end == start)
		{
			end = end->next;
		}
		delete (start);
	}
	else
	{
		prev = head;
		while (prev->next != start)
		{
			prev = prev->next;
		}
		prev->next = start->next;
		delete (start);
	}