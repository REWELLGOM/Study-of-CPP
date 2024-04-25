### 각각의 파일에는 간단하게 단원별 정리가 있음

# 분할컴파일 방법
https://toopyo.tistory.com/entry/vscode-post5-gccfileseperate

## 깃허브 모르거나 까먹을때마다
https://heannim-world.tistory.com/130

## STL 공부하자 영어임
https://github.com/douglascraigschmidt/CPlusPlus

## STL유튜브
https://www.youtube.com/watch?v=6Gyl5wi3yi4&t=756s

## vscode c++세팅
https://codesyun.tistory.com/entry/VS-Code-C-C-%EC%BB%B4%ED%8C%8C%EC%9D%BC-%EC%8B%A4%ED%96%89-%EB%94%94%EB%B2%84%EA%B9%85

## About Task.json
C++ files by using an argument like "${workspaceFolder}/*.cpp" instead of "${file}"
${workspaceFolder} gives the root path of a workspace folder
${file} the file open in the active editor
1. label : 명령 팔레트 UI에 보여지는 이름이다.

2. type : process라고 입력하면 실행 파일을 뜻하고, shell 이라고 적으면 bash 또는 powershell을 뜻한다.

3. commend : 실행할 명령어이다.

4. args : 실행할 명령어 뒤에 붙는 argument들이다.

6. options : 기타등등 여러가지 환경 변수값들을 기록하는 곳이다. cwd는 현재 working directory를 뜻한다. 

7. problemMatcher : 컴파일러들이 마다 Warning, Error 출력하는 규칙이 다르다. 정규식 표현 등을 이용하여 벹어내는 Warning, Error 들을 파싱하여 “출력”창에 뿌려주게끔 설정한다. 하지만 C/C++ Extention을 쓰기 때문에 자동으로 처리르 해 준다. problemMatcher는 추가설정 없이 “$gcc”만 냅두면, Extention에게 맡겨지게 된다.

8. group : task 파일이 어느 그룹에 속하는지를 나타낸다. 그룹으로 여러 task를 묶을 수있다.

# 논제

## 캡슐화 vs 모듈화

## 포인터 vs 참조자

