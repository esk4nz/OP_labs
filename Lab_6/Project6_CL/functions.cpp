#include "functions.h"

template<typename T>
void start_program(){
    int choice;
    List<T>list;
    size_t size;
    cout<<"Enter a structure size:";cin>>size;

    for (int i = 0; i < size; ++i) {
        cout<<"Enter "+ to_string(i+1)+" value:";
        T value;
        cin >> value;
        list.insert(value);
    }

    do {
        print_list(list);
        cout << "Choose operation" << endl;
        cout << "->0. Quit"<<endl;
        cout << "->1. Check if empty"<<endl;
        cout << "->2. Clear a list"<<endl;
        cout << "->3. Find element by index"<<endl;
        cout << "->4. Delete by index"<<endl;
        cout << "->5. Insert an element"<<endl;
        cin>>choice;
        size_t index;
        T value;

        switch (choice) {

            case 1:
                cout << "Is Empty: "<<(list.is_empty()==1?"true":"false")<<endl;
                break;
            case 2:
                cout << "List cleared"<<endl;
                list.clear();
                break;
            case 3:
                cout << "Enter index:";cin>>index;
                try {
                    cout << "Value: "<< *list[index]<<endl;
                }catch(out_of_range err) {
                    cerr << err.what()<<endl;
                }
                break;
            case 4:
                cout << "Select position: ";cin>>index;
                try {
                    list.delete_i(index);
                }catch(out_of_range err){
                    cerr << err.what()<<endl;
                }

                break;
            case 5:
                cout << "Enter a value: ";cin>>value;
                list.insert(value);
                break;
        }

    } while (choice!=0);
}

template<typename T>
void print_list(List<T>& list){
    cout <<"Double-linked list"<<endl << "{ ";
    auto it = Iterator<T>(list);

    for(int i=0;i<list.size();++i){
        cout << *it << " ";
        it++;
    }

    cout <<"}"<< endl;
}