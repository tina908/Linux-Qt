# linux QT

## 명령어
```
qmake -project
```
> 프로젝트 파일을 생성한다

```
qmake 
```
> 소스 코드를 컴파일한다



## 에러 발생 시

### fatal error: QWidget: 에러

> qmake -project 후 바로 qmake make를 하면 에러가 발생한다   
> pro 파일이 새로 생성 되었기 때문이다   

![image](https://github.com/tina908/Linux-Qt/assets/68736697/63972560-26ae-441f-96b3-b0cdf6ec07cd)

![image](https://github.com/tina908/Linux-Qt/assets/68736697/c5da6f9c-7cea-4f39-b8bc-3e9358faaa6a)

> QWidget 모듈이 별도로 필요하기에 관련 사항을 추가해야 한다  
> .pro파일에 QT+=widgets를 추가한 후 qmake make 한다

### make: 'first'을(를) 위해 할 일이 없습니다.

```
ubuntu@ubuntu06:~/QtExamples/tetrix$ make clean

ubuntu@ubuntu06:~/QtExamples/tetrix$ make
```
> make clean 후 make 한다

![image](https://github.com/tina908/Linux-Qt/assets/68736697/e8c867db-8586-4734-af2e-b131eb33b8ed)


## tetrix
```
ubuntu@ubuntu06:~/QtExamples/tetrix$ qmake

ubuntu@ubuntu06:~/QtExamples/tetrix$ make

ubuntu@ubuntu06:~/QtExamples/tetrix$ ./tetrix
```
![image](https://github.com/tina908/Linux-Qt/assets/68736697/00b22ea1-798d-4b32-83b3-a8d92503658f)
![image](https://github.com/tina908/Linux-Qt/assets/68736697/d77a2229-833f-4438-9bba-a0e927e601d1)
>우분투 가상머신의 터미널 안에서 실행해야 한다

## tetrixPi

## p657
```
ubuntu@ubuntu06:~/QtExamples/p657$ qmake

ubuntu@ubuntu06:~/QtExamples/p657$ make

ubuntu@ubuntu06:~/QtExamples/p657$ ./hello
```
![image](https://github.com/tina908/Linux-Qt/assets/68736697/c514c553-2e15-47fb-b1a7-e0b4115837fc)
```
#include <QLabel>
```
> QLabel 클래스는 QFrame 클래스를 상속 받고,   
> QFrame 클래스는 QWidget 클래스를 상속 받기에 QWidget 메소드를 사용할 수 있다

![image](https://github.com/tina908/Linux-Qt/assets/68736697/f75b12d4-bc9f-4e8a-a59f-49e0cde567fb)


```
QApplication app(argc, argv);
```
> QApplication 객체 생성

## p664
```
ubuntu@ubuntu06:~/QtExamples/p664$ qmake

ubuntu@ubuntu06:~/QtExamples/p664$ make

ubuntu@ubuntu06:~/QtExamples/p664$ ./button
```

![image](https://github.com/tina908/Linux-Qt/assets/68736697/bcf2960a-3e87-46fd-b700-24439d9e4686)

> quit 버튼을 누르면 종료한다

```
QObject::connect(시그널을 발생 시킬 객체의 포인터, 앞 객체가 발생 시키는 시그널, 시그널을 받을 객체의 포인터, 앞 객체에 슬롯 지정)
```

> QT는 이벤트 처리를 위해 SIGNAL과 SLOT구조를 사용한다   
> 버튼 클릭 이벤트에 반응이 이뤄지려면 각 객체들의 SIGNAL과 SLOT를 연결해야 한다   
> QObject 클래스는 SIGNAL과 SLOT을 연결하기 위해 connect() static 메소드를 제공한다   

```
QObject::connect(button, SIGNAL(clicked()), &app, SLOT(quit()));
```
> 버튼의 clicked() 시그널이 QApplication의 quit() 슬롯에 연결
>  버튼이 클릭되면 애플리케이션이 종료되도록 설정


## p665









