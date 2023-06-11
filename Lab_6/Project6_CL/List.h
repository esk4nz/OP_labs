
#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

template <typename T> class List;
template <typename T> class Iterator;

template <class T>
class Node{
    Node<T>* next;
    Node<T>* prev;
    T data;
public:
    friend class Iterator<T>;
    friend class List<T>;
    Node(T _data);
};

template <typename T>
class Iterator{
    List<T> _list;
    Node<T>* _curr;
public:
    Iterator(List<T>&);
    Iterator(const List<T>&,Node<T>*);
    //setting to a head of the list
    Iterator<T> begin();
    //traversing to the next element
    void operator++(int);
    //traversing to the prev element
    void operator--();
    //accessing a current element
    T& operator*() const;
    //checking if a tail
    bool is_tail();
};

template <typename T>
class List {
    Node<T>* _head;
    Node<T>* _tail;
    size_t _size;
public:
    //checking for emptiness
    bool is_empty();
    //clear the list
    void clear();
    //access by index
    Iterator<T> operator[](size_t index)const;
    //delete by index
    T delete_i(size_t);
    size_t size() const;
    void insert(T obj);
    List();
    friend class Iterator<T>;
};


#endif