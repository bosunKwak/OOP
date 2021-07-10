### 디지털 계산기 프로그램 만들기 (캡슐화, 정보 숨기기 등과 같은 OOP 정책 유지)

클래스 simpleCalc로 디지털 계산기 추상화 (simpleCalc class는 int a, b 및 c를 가지고 있으며, 두 변수의 작동을 위한 add/subtract method를 가지고 있음)
1) add method 안에서, ‘정수+정수’ 사용
2) subtract method 안에서, ‘정수–정수’ 사용
 
복소수 및 연산자 중복에 대한 클래스를 사용하고 simpleCalc를 상속하여 고급 디지털 계산기에 대한 클래스 adCalc를 생성
main()함수는 SimpleCalc 클래스의 함수에 액세스할 수 없음 (add/subtract method 구현)
