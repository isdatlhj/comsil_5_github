#include "LinkedList.h"



//LinkedList class를 상속받음

template <class T>
class Stack : public LinkedList<T>{
	public:
		bool Delete (T &element){
			Node<T> *t;
			//first가 0이면 false반환
			if (this->first == 0) {
				return false;
			}
			// LinkedList와 달리 Stack은 current가 가리키는 곳을 삭제
			element = this->first->data;
			t = this->first;
			this->first = this->first->link;
			delete t;
			this->current_size--;
			return true;
			}
};