template<typename T>
class Node{
public:
	T key;
	Node<T> *left , *right ;

	Node(T key){
		this->key = key;
		this->left = this->right = nullptr;
	}
};
