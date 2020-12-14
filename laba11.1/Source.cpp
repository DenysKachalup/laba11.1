#include<fstream>
#include<iostream>
#include<string>

using namespace std;
void creat(const char* fname)
{
	ofstream fout(fname, ios::binary); 
	char ch; 
	string s; 
	do
	{
		cin.get(); 
		cin.sync(); 
		cout << "enter line: "; getline(cin, s); 
		for (unsigned i = 0; i < s.length(); i++) 
			fout.write((char*)&s[i], sizeof(s[i])); 
		cout << "continue? (y/n): "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << endl;

}
void proc(const char* fname)
{

	/*ifstream f(fname, ios::binary);
	ofstream t("bin1", ios::binary);
	int x[22];
	for (int i = 0; i < 20; i++)
	{
		f.getline((char*)&x, sizeof(x));
	
	 if (x[i] == x[1]||x[1]+x[2]||x[1]+x[2]+x[3]);
	 t.write((char*)&x[i], sizeof(x));
	
	}
	t.close();
	f.close();*/

}
void print(const char* fname)
{
	ifstream f(fname, ios::binary);
	char x;
	int i = 0;
	char b[100];
	while (f.getline((char*)&x, sizeof(x)))
	{
		b[i++] = x;
	cout << b[i] << endl;
	cout << endl;
    }
}
int main()
{
	srand((unsigned)time(NULL));
	char fname[20];
	cin >> fname;

	creat(fname);
	proc(fname);
	print(fname);

}