# cpp_libtorch_example
pytroch with cpp

## 파이토치 c++ 라이브러리 다운로드
https://pytorch.org/get-started/locally/

## 비쥬얼 스튜디오(2019 기준) 프로젝트 속성 세팅
[C/C++] 일반/추가포함 디렉터리
```sh
libtorch\include
libtorch\include\torch\csrc\api\include
```
[C/C++] 언어/언어 확장 사용안함: 아니요
[C/C++] 언어/준수 모드: 아니요

[링커] 일반/추가 라이브러리 디렉터리
```sh
libtorch\lib
```
[링커] 입력/추가 종속성
(cpu ver)
```sh
torch_cpu.lib
c10.lib
torch.lib
```
(gpu ver)
```sh
torch.lib
torch_cuda.lib
caffe2_nvrtc.lib
c10.lib
c10_cuda.lib
torch_cpu.lib
```
[구성 속성] 디버깅/환경
```sh
PATH=libtorch\lib
```
