#include <iostream>
using namespace std;

typedef struct nod{
	int nr;
	struct nod *urm;
}NOD;

NOD *back,*front;

void creeaza(){
	front= NULL;
}

int vid(){
	if (front==NULL) return 1;
	else return 0;
}

void pune(int a){
	NOD *p=new NOD;
	p->nr=a;
	p->urm=NULL;
	if (vid() ) front=p;
	else{
		back->urm=p;
	}
	back=p;
}

int scoate(){
	int a;
	NOD *p;
	p=front;
	a=p->nr;
	front=front->urm;
	delete(p);
	return a;
}

int main(){
	int a=1;
	creeaza();
	if(vid() ) {
		cout << "Lista goala" << endl;
	}
	else{
	cout << "introduceti un nr:";
		while(a!=0){
			cin >> a;
			if(a!=0) pune(a);
		}
		while(!vid()){
			a=scoate();
			cout << a << endl;
		}
	}
	system("pause");
	return 0;
}