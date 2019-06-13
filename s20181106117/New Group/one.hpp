//
//  one.hpp
//  s20181106117
//
//  Created by s20181106117 on 2019/6/13.
//  Copyright © 2019 s20181106117. All rights reserved.
//

#ifndef one_hpp
#define one_hpp
class CMyClassA {
    int val;
public:
    CMyClassA(int);
    void virtual print();
};
CMyClassA::CMyClassA(int arg) {
    val = arg;
    printf("A:%d\n", val);
}
void CMyClassA::print() {
    printf("%d\n", val);
    return;
}

/* 在这里填写代码 */
class CMyClassB :public CMyClassA{
    public :
    CMyClassB(int t=0):CMyClassA(3*t)
    {
        val=t;
        
        printf("B:%d\n", val);
    }
    void virtual print()
    {
        printf("%d\n", val);
    }
private:
    int val;
    
}; int main(int argc, char** argv) {
    CMyClassA a(3), *ptr;
    CMyClassB b(5);
    ptr = &a;
    ptr->print();
    a = b;
    a.print();
    ptr = &b;
    ptr->print();
    return 0;
}
#endif /* one_hpp */
