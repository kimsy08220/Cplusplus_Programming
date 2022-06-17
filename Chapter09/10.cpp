#include <iostream>
#include <stdlib.h>
using namespace std;
 
class UI {
public:
    static int show_menu() {
        int num;
        cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>" ;
        cin >> num;
        return num;
    }
    static int input_shape() {
        int num;
        cout << "선:1, 원:2, 사각형:3 >> ";
        cin >> num;
        return num; 
    }
    static int del_index() {
        int num;
        cout << "삭제하고자 하는 도형의 인덱스 >> ";
        cin >> num;
        return num;
    }
};
 
class Shape { 
    Shape* next;
protected:
    virtual void draw() { cout << "--Shape--" << endl; }
public:
    Shape() { next = NULL; }
    virtual ~Shape() {}
    Shape* add(Shape* p) { 
        this->next = p;
        return p; 
    }
    Shape* getNext() { return next; }
    void paint() { draw(); }
    void setNext(Shape *p) { this->next = p->next; }
};
 
class Line : public Shape {
public:
    virtual void draw() { cout << "Line" << endl; }
};
 
class Circle : public Shape {
public:
    virtual void draw() { cout << "Circle" << endl; }
};
 
class Rect : public Shape {
public:    
    virtual void draw() { cout << "Rectangle" << endl; }
};
 
 
class GraphicEditor { 
    int node_size;
    Shape* pStart;
    Shape* pLast;
public:
    GraphicEditor() {
        pStart = NULL;
        node_size = 0;
    }
    int run() {
        cout << "그래픽 에디터입니다.\n";
        while(true){
            int num;
            num = UI::show_menu();
            switch (num){
                case 1:{
                    num = UI::input_shape();
                    input_new(num);
                    break;
                }
                case 2:{
                    if(pStart == NULL){
                        cout << "List Empty\n";
                        break;
                    }
                    num = UI::del_index();
                    del(num);
                    break;
                }
                case 3:{
                    show();
                    break;
                }
                case 4:{
                    exit(0);
                }
                default :
                    cout << "메뉴를 잘못 선택하셨습니다.\n";
            }
        }
    }
    void input_new(int n) {
        switch (n){
            case 1: {
                if(node_size == 0) {
                    pStart = new Line();
                    pLast = pStart;
                }
                else
                    pLast = pLast->add(new Line());
                node_size++;
                break;
            }
            case 2: {
                if(node_size == 0){
                    pStart = new Circle();
                    pLast = pStart;
                }
                else
                    pLast = pLast->add(new Circle());
                node_size++;
                break;
            }
            case 3: {
                if(node_size == 0){
                    pStart = new Rect();
                    pLast = pStart;
                }
                else
                    pLast = pLast->add(new Rect());
                node_size++;
                break;
            }
            default :
                cout << "메뉴를 잘못 선택하셨습니다.\n";
        }
        
    }
    bool del(int n) {
        int k=0;
        Shape* target_node = pStart;
        Shape* priv_node;
        if(n == 0){
            pStart = pStart->getNext();
            delete target_node;
        }
        else{
            while( (target_node != NULL) && (k < n)){
                priv_node = target_node;
                target_node = target_node->getNext();
                k++;
            }
            if(target_node == NULL){
                cout << "없는 노드입니다.\n";
                return false;
            }
            else {
                priv_node->setNext(target_node); 
            delete target_node;
            } 
        }
        node_size--;
        
    }
    void show() {
        Shape* p = pStart;
        int i=0;
        if(p == NULL)
            cout << "List Empty\n";
        else 
            while(p != NULL){
                cout << i << ": ";
                p->paint();
                p = p->getNext();
                i++;
            }
    }
};
 
int main() {
    GraphicEditor* g_editor = new GraphicEditor;
    g_editor->run();
    delete g_editor;
}
