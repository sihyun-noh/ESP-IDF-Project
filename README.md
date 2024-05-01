# ESP-IDF-Project

project-root/
│
├── src/                  # 소스 코드 디렉토리
│   ├── main.c            # 주 소스 파일
│   ├── file1.c           # 추가 소스 파일
│   └── file2.c           # 추가 소스 파일
│
├── include/              # 헤더 파일 디렉토리
│   ├── header1.h         # 헤더 파일
│   └── header2.h         # 헤더 파일
│
├── test/                 # 테스트 코드 디렉토리
│   ├── test1.c           # 테스트 코드 파일
│   └── test2.c           # 테스트 코드 파일
│
├── CMakeLists.txt        # CMake 프로젝트 파일
├── README.md             # 프로젝트 README 파일
└── .github/
    └── workflows/
        └── ci.yml        # GitHub Actions Workflow 파일

src/: 소스 코드가 있는 디렉토리입니다. 주로 .c 파일들이 이 디렉토리에 위치합니다.
include/: 헤더 파일이 있는 디렉토리입니다. .h 파일들이 이 디렉토리에 위치합니다.
test/: 테스트 코드가 있는 디렉토리입니다. 주로 .c 파일들이 이 디렉토리에 위치하며, 이 파일들은 프로젝트의 유닛 테스트를 위한 것입니다.
CMakeLists.txt: CMake 프로젝트 파일입니다. 프로젝트를 빌드하기 위한 CMake 설정이 여기에 포함됩니다.
.github/workflows/ci.yml: GitHub Actions Workflow 파일입니다. 이 파일은 프로젝트를 빌드하고 테스트하는 CI 파이프라인을 정의합니다.
