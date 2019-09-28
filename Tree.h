#include <iostream>
#include "Node.h"
#include <list>
using std::list;
template <typename T>
class Tree{
public:
	Node<T> *root;

	Tree(): root(nullptr){};

	bool identical(Tree<T> * raiz2){

	};
	void insert(T data){
		insertNode(data,&root); 	
	};

	bool insertNode(T data, Node<T> **root){
		Node<T> **raiz= root;
		if (*raiz == nullptr){
				*raiz = new Node<T>(data);
		}
		if (data > (*raiz)->key ){
			insertNode(data,&(*raiz)->right);
		}
		else if (data <(*raiz)->key){
			insertNode(data, &(*raiz)->left);
		}
		return 1;
	};

    Node<T>* find(T data,Node<T> ** root) {
		Node<T> ** pp = root;
		if ( *pp->key == data) 
			return *pp ; 
		if (*pp->key > data) 
			return (find(data, &(*pp->left)));
		if (*pp->key < data)
			return (find(data, &(*pp->right)));
			 
    }; 
    bool remove(T data) {
        };

    unsigned int size() {
        };
	unsigned int height(){

	};

	bool esVacio(){
		return (!root);	
	}
	void inOrder(Node<T>* root){
		if (root){ 
			inOrder(root->left);
			std::cout<< root->key<<" ";
			inOrder(root->right);
		}
	}
	void inOrder(){
		inOrder(root);
		std::cout<<std::endl;
	};
	void preOrder(Node<T>* root){
		if (root){ 
			std::cout<< root->key<<" ";
			preOrder(root->left);
			preOrder(root->right);
		}
	}
	void preOrder(){
		preOrder(root);
		std::cout<<std::endl;
	};
	void posOrder(Node<T>* root){
		if (root){ 
			posOrder(root->left);
			posOrder(root->right);
			std::cout<< root->key<<" ";
		}
	}
	void posOrder(){
		posOrder(root);
		std::cout<<std::endl;
	};
	
	T  nextNode(T data){
		if (root ==nullptr)
				return 0;
		list<Node<T>*> cola;
		cola.push_back(root);

		Node<T>* primero = nullptr;
		while (!cola.empty()){
			int size= cola.size();
			while (size--){
				primero = cola.front();
				cola.pop_front();
				if (primero->key ==data){
					if (size==0)
						return 0;
					return (cola.front())->key;
				}
				if (primero->left)
						cola.push_back(primero->left);
				if (primero->right)
						cola.push_back(primero->right);
			}

			
		}


		return 0;


	}



};
