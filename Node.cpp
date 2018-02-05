#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;

class Node {
	public:

	vector<double> data;
	Node* left = NULL;
	Node* right = NULL;
	double distance;
	Node(const vector<double>& d){
		data = vector<double>(d);
	}
	
	double getDistance();
	double getData(int index);
	double computeDistance(Node* other);
	//bool operator==(Node* other);
	//bool operator > (Node* )
	void printNode(); 
};

double Node::getDistance(){
	return distance;	
}
double Node::getData(int index){
	return data[index];	
}
double Node::computeDistance(Node* other) {
	double res = 0;
	for (int i = 0; i < data.size(); ++i) {
		res += pow(data[i] - other->data[i],2);		
	}
	return sqrt(res);
}
void Node::printNode() {
	if (data.size() == 0) return;
	printf("[%f", data[0]);
	
	for (int i = 1; i < data.size(); ++i) {
		printf(", %f", data[i]) ;
	}
	printf( "]    d: %f;\n" , distance); 

}


int main() {
	vector<double> p({4, 3});
	vector<double> q({0, 0});
	Node root(p);
	Node* cur = new Node(q);
	root.printNode();
	double d = root.computeDistance(cur);
	root.distance = d;
	root.printNode();
	cur->printNode();
	//delete cur;
	
	return 0;
}





