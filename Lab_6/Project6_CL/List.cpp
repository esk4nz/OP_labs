#include "List.h"

//NODE FUNCTIONS
template <typename T>
Node<T>::Node(T _data):data(_data),prev(nullptr),next(nullptr){};



//ITERATOR FUNCTIONS
template <typename T>
Iterator<T>::Iterator(List<T>& list){
    _list=list;
    _curr=list._head;
}


template <typename T>
Iterator<T> Iterator<T>::begin(){
    _curr=_list._head;
    return *this;
}

template <typename T>
Iterator<T>::Iterator(const List<T>& list,Node<T>* node):_list(list),_curr(node){};

template <typename T>
void Iterator<T>::operator++(int i){
    _curr=_curr->next;
}

template <typename T>
void Iterator<T>::operator--(){
    _curr=_curr->prev;
}

template <typename T>
T& Iterator<T>::operator*() const{
    return _curr->data;
}

template <typename T>
bool Iterator<T>::is_tail(){
    return _curr==_list._tail;
}



//LIST FUNCTIONS
template <typename T>
bool List<T>::is_empty(){
    return _size==0;
}

template <typename T>
void List<T>::clear() {
    Node<T>* curr = _head;
    while (_size != 0) {
        Node<T>* nextNode = curr->next;
        delete curr;
        curr = nextNode;
        --_size;
    }
}

template <typename T>
Iterator<T> List<T>::operator[](size_t index)const{
    if(index<0||index>_size-1)
        throw out_of_range("Only indices in range from 0 to "+to_string(_size-1)+" allowed");

    int i=0;
    Node<T>* curr=_head;
    while(i!=index){
        curr=curr->next;
        ++i;
    }

    return Iterator(*this,curr);
}

template <typename T>
T List<T>::delete_i(size_t index){
    if(index<0||index>_size-1)
        throw out_of_range("Only indices in range from 0 to "+to_string(_size-1)+" allowed");

    int i = 0;
    Node<T>* curr = _head;
    while (i != index) {
        curr = curr->next;
        ++i;
    }

    if (curr == _head) {
        _head = curr->next;
        _head->prev=_tail;
    } else if (curr == _tail){
        _tail = curr->prev;
        _tail->next=_head;
    }
    else{
        curr->prev->next = curr->next;
        curr->next->prev=curr->prev;
    }

    T value = curr->data;
    delete curr;
    --_size;

    return value;
}


template <typename T>
size_t List<T>::size() const{
    return  _size;
}

template <typename T>
void List<T>::insert(T obj){
    if(_size==0){
        //insert as a first elem
        _head=new Node(obj);
        _tail=_head;
        _head->next=_head;
        _head->prev=_head;
    }else{
        //insert to the end of the list

        Node<T>* newNode=new Node(obj);
        newNode->prev=_tail;
        newNode->next=_head;

        _tail->next=newNode;
        _tail=newNode;
        _head->prev=_tail;
    }

    _size++;

}


template <typename T>
List<T>::List():_head(nullptr),_tail(nullptr),_size(0){};