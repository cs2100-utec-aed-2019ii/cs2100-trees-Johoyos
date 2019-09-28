#include <iostream>
#include "Tree.h"

int main(){

	Tree<int> *ptree = new Tree<int>(); 
//	Tree<int> *ptree2 = new Tree<int>(); 
	ptree->insert(5);
	ptree->insert(10);
	ptree->insert(20);
	ptree->insert(40);
	ptree->insert(70);
	ptree->insert(90);
	ptree->insert(8);
	std::cout<<"el del costado es:"<<ptree->nextNode(20)<<std::endl;


	ptree->inOrder();
	ptree->preOrder();
	ptree->posOrder();
//	std::cout <<"altura es "<<ptree->height() <<std::endl;
	


	std::cout<< "hola"<<std::endl;
	return 0;
}
