# linux QT
```
https://doc.qt.io/archives/qt-5.14/qlabel.html
```
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
![image](https://github.com/tina908/Linux-Qt/assets/68736697/91db97f1-7f4c-40c1-9275-78b746c8b427)

> 디바이스 드라이버를 이용해 ledkey가 테스리스의 방향키 역할을 할 수 있다

> 1번 키 : 왼쪽으로 방향 꺽기   
> 2번 키 : 오른쪽으로 방향 꺽기     
> 3번 키 : 왼쪽으로 이동     
> 4번 키 : 오른쪽으로 이동 
> 5번 키 : 스타트    
> 6번 키 : 바로 떨어지기    
> 7번 키 : 초기화    
> 8번 키 : 정지/정지 해제       

### 에러 창 발생 시
![image](https://github.com/tina908/Linux-Qt/assets/68736697/93cb001e-e09b-4c04-b796-4548ecaa3ba3)
> 디바이스 드라이버를 사용하기 위해 raspberry에서 실행한다    
> raspberry에서 실행해도 에러가 발생할 땐 ledkey 모듈 적제가 되지 않았을 때 발생한다

```
pi@pi06:/mnt/ubuntu_nfs $ sudo mknod /dev/ledkey_dev c 230 0

pi@pi06:/mnt/ubuntu_nfs $ sudo chmod 666 /dev/ledkey_dev

pi@pi06:/mnt/ubuntu_nfs $ sudo insmod ledkey_dev.ko

```
> ledkey 모듈을 적재 해준 뒤 실행한다

```
pi@pi06:/mnt/ubuntu_nfs/QtExampels/tetrixPi $ ./tetrix
```

![image](https://github.com/tina908/Linux-Qt/assets/68736697/54bb2393-fc62-4929-88ba-309c6b0ea975)



![image](https://github.com/tina908/Linux-Qt/assets/68736697/44be8575-b1a0-417a-b31f-4510132eaa89)


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
ubuntu@ubuntu06:~/QtExamples/p664$ qmake -project -o button

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
> 버튼의 clicked() 시그널이 QApplication의 quit() 슬롯에 연결되도록 한다   
> 이 코드에 의해 버튼이 클릭되면 애플리케이션이 종료된다


## p665
```
ubuntu@ubuntu06:~/QtExamples/p665$ qmake

ubuntu@ubuntu06:~/QtExamples/p665$ make

ubuntu@ubuntu06:~/QtExamples/p665$ ./custom
```

![image](https://github.com/tina908/Linux-Qt/assets/68736697/7c236c7c-9cf4-4d05-be68-43519c34a4db)

> BUTTON 버튼을 누르면 종료한다

```
QObject::connect(button, SIGNAL(clicked()), qApp, SLOT(quit()));
```
> 시그널에서 사용자 정의 슬롯을 호출한 후,
> 슬롯에서 시그널을 다시 발생하는 경우에
> 시그널과 시그널을 바로 연결할 수 있디

```
QObject::connect(button, SIGNAL(clicked()), this, SLOT(processClick()));
QObject::connect(this, SIGNAL(widgetClicked()), qApp, SLOT(quit()));
```
> 동일한 기능의 코드다


## SensorMan_KYJ

![스크린샷 2024-05-31 173848](https://github.com/tina908/Linux-Qt/assets/68736697/c099d5fe-b6f7-4568-b502-92351a7edfd6)

![스크린샷 2024-05-31 173853](https://github.com/tina908/Linux-Qt/assets/68736697/d1381536-78e7-4726-bfe3-e516a96f32a0)

![스크린샷 2024-05-31 173900](https://github.com/tina908/Linux-Qt/assets/68736697/9ca6ce07-4b3f-4e8c-81d7-ab04cc7de195)













