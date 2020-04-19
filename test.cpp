#include<iostream>
#include<cassert>
using namespace std;
class Term {
	double coe;
	double degree;
public:
	Term(double a, double b) :coe(a), degree(b) {};
	bool put_data(double a, double b) { coe = a; degree = b; return a==coe&&b==degree; }
	double get_degree() { return degree; }
	double get_coe() { return coe; }
	friend Term* operator + (const Term &a, const Term &b);
	friend Term* operator - (const Term &a, const Term &b);
};
class Node :public Term {
public:
	Node * next;
	Node(double a,double b):Term(a,b) { next = NULL; }
	~Node() { if (next != NULL) delete next; }
};
Term*  operator + (const Term &a, const Term &b) {
	Term *p = NULL;
	if (a.get_degree == b.get_degree)
	{	
		p = new Term(a.get_coe + b.get_coe, a.get_degree);
	}
	return p;
}

class AbList {
public:
	Term* get_head() { return head; }
	virtual void insert(Term a)=0;
	void make_empty();
protected:
	int length;
	Term * head;
};
void AbList::make_empty()
{
	Term *q=head
}